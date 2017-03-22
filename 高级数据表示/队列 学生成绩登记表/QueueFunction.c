#include"QueueList.h"
#define TEST

//内部调用
static Student * GetInformation(void);//获取待添加的学生数据 
static Queue * PrivateSort(Queue *,Student *);//按顺序插入队列中
static Queue * PrivateInsert(Queue * a,Student *s);//a原队列插入点，s是对应待加入的结构体，返回s对应的节点
static Queue * ReadFile(Queue * a);//内部读取文件记录函数。 
static bool WriteFile(Queue * a);//以二进制的模式输出到List.temp 
static bool WriteFile2(Queue * a);//以文本形式输出到list.txt 
extern amount;//学生数量计数器 

//队列函数 
Queue * Initialize(Queue * a) {
	a=(Queue *)malloc(sizeof(Queue *));
	if( a == NULL )
	{
		printf("子函数初始化失败！\n");
		return NULL;
	}
	else
		printf("子函数初始化成功！\n");
	a->next = NULL;
	a->student = NULL;
	if(a->student==NULL)
		printf("初始化学生完毕\n");
	amount = 0;
	printf("初始化成功！\n");
	ReadFile(a);
	return a;
}
bool QueueIsEmpty(Queue * a) {
	if(amount == 0)
	{
//		printf("调试：QueueEmpty:列表为空！\n");
		return true;
	}
	else
		return false;
}
Queue * InsertNode(Queue * a) {
	Student * s;
	//获取 学生数据 
	while((s=GetInformation()) != NULL){
		a=PrivateSort(a,s);
		putchar('\n');
	}
	//插入队列中 
	return a;
}
Queue * DeleteNode(Queue * a) {
	char tn[10];
	int i = amount;
	Queue * now = a;//临时指针 
	Queue * front ; //保存上一个节点的地址用来连接
	printf("请输入你要删除学生的名字：");
	gets(tn);
	while(i!=0 && strcmp(tn,now->student->name)!=0) {
		front=now;
		now=now->next;
		i--;
//		printf("调试：%d\n",i);
	}
	//删除首节点 
	if(i==amount)
	{
		front=now;
		now=now->next; 
		free(front);
		amount--;
		return now;//返回新节点地址 
	 } 
	//找不到对应名字的节点。 
	else if(i==0) {
		printf("查无此人\n");
		return a;
	}
	front->next = now->next;
	free(now);
	amount--;
	printf("删减成功!\n");
	return a;
}
bool EmptyTheQueue(Queue * a) {
	Queue * tq;
	if(QueueIsEmpty(a))
	{
		printf("列表没有内容！\n");
		return true; 
	}
	printf("正在清空列表...\n");
	while(amount!=0) {
		
//		printf("调试！\n");
		tq = a;
		a=a->next;
		free(tq);
		amount--;
	}
	printf("清空完毕\n");
	return true;
}
void ShowQueue(Queue * a) {
	if(amount == 0)
	{
		printf("列表为空！\n");
		return;
	}
	int i = amount;
	Student * s;
	printf("目前队列有%d个学生。\n",amount);
	while(a!=NULL) {
		s = a->student;
		printf("%-8s %-3d %c\n",s->name,s->age,s->grade);
		i--;
		a=a->next;
	}
	putchar('\n');
	return;
}

//队列函数内部辅助函数 
static Student * GetInformation(void){//获取待添加学生的数据 
	//获取学生名
	char name[10];
	printf("请输入名字(直接回车退出)：");
	gets(name);
	while(name[0]=='\n'||name[0]==0) {
		return NULL;
	}
	//写入结构体
	Student * s; //初始化一个临时结构体
	if((s=(Student *)malloc(sizeof(Student))) == NULL)
	{
		printf("申请Student空间失败!\n");
		return NULL;
	}
	strcpy(s->name,name);
	
#ifdef TEST	//调试代码
		{
			s->age=18;
			s->grade='A'; 
			return s;
		} 
#endif

	//获取年龄 
	printf("请输入年龄：");
	scanf("%d",&s->age) ;
	while(getchar() != '\n')
		continue;
	while(s->age>100 || s->age<1)
	{
		printf("年龄的范围是1~100岁\n");		 
		printf("请重新输入:");		 
		scanf("%d",&s->age) ;		 
		while(getchar() != '\n')
			continue;
	}
	//获取成绩等级 
	printf("请输入他的等级(A,B,C,D)：");
	s->grade=getchar();
	while(!(s->grade>='a'&&s->grade<='d' || s->grade>='A'&&s->grade<='D'))
	{
		fflush(stdin);
		printf("您的输入的等级超出了额定范围！\n");
		printf("请重新输入:");
		s->grade=getchar();
	}
//	printf("调试1\n"); 
	if(s->grade>'D')
		s->grade -= 32;
	fflush(stdin);
	return s;
} 
static Queue * PrivateSort(Queue * a ,Student * s) { //链表排序函数 
	//若为空队列，直接赋值返回 
	if(QueueIsEmpty(a))
	 {
		 
		a->student = s;
		amount++;
		return a;
	} 
	Queue * now = a;		//存放a的当前节点地址
	Queue * front ;			//存放a的上一个节点地址
	int i;					//字符串比较指数
	i=strcmp(now->student->name,s->name); //比较字符串大小
	if(i>0) {				//若s比首字符串小，则直接添加到开头，并改变a的指向
		front = (Queue *)malloc(sizeof(Queue));
		front->student = s;
		front->next = now;//指向原先第一个节点的地址
		amount++;
//		printf("调试：添加开头成功！\n");
		return front;//返回新节点的地址。 
	}
	while((i=strcmp(now->student->name,s->name))<0) { //跳转到front比s大或相等的节点
		if(now->next == NULL) //如果a下一项为空，直接添加到末尾
			if(PrivateInsert(now,s)!=NULL) {
//				printf("调试：添加末尾成功！\n");
				return a;
			} else {
//				printf("调试：添加末尾失败！\n");
				return a;
			}
		front = now; //指向下一项
		now = now->next;
	}
	if(i==0) {	//字符串相同
		printf("已存在该同学的信息：\n");
		printf("\t原信息：%s %d %c\n",now->student->name,now->student->age,now->student->grade);
		printf("\t新信息：%s %d %c\n",s->name,s->age,s->grade); 
		printf("请问您是否想要覆盖原信息？\n");
		printf("(Y确定,任意键取消。)");
		{
			char g=getchar();
			fflush(stdin);
			if(g=='y'||g=='Y')
				now->student = s;
			printf("覆盖成功！\n");
		}
		return a;
	} else if(i>0) { //a所在项恰好比S大
		PrivateInsert(front,s);
//		printf("调试：插入中间成功！");
		return a;
	} else {
		printf("调试：内部插入函数异常！\n");
		return a;
	}
}
static Queue * PrivateInsert(Queue * a,Student *s) { //插入节点函数 
	Queue * b = (Queue *)malloc(sizeof(Queue));
	b->student = s;
	b->next = a->next;
	a->next = b;
	amount++;
	return b;
}
	
//文件读取写入函数 
static Queue * ReadFile(Queue * a){
	FILE*fp=fopen("List.temp","r+");
	if(fp==NULL){
		printf("没有记录文件！\n");
		return NULL;
	}
	else
	{
		printf("读取数据中...\n");
	}
	Student * s = (Student *)malloc(sizeof(Student));
	while(fread(s,sizeof(Student),1,fp)!=0)
	{
		a=PrivateSort(a,s);
		s = ( Student * )malloc( sizeof(Student) );
	}
	free(s); 
	printf("读取完毕！\n");
//	ShowQueue(a);
	return a;
}
static bool WriteFile(Queue * a){
	FILE*fp=fopen("List.temp","wb");
	printf("保存数据中...\n");
	while(a!=NULL)
	{
//		printf("调试：输出文件函数！\n"); 
//		printf("调试：%s\n",a->student->name);
		fwrite(a->student,sizeof(Student),1,fp);
		printf("%s同学数据保存成功！\n",a->student->name);
		a=a->next;
	}
	fclose(fp);
	return true;
}
static bool WriteFile2(Queue * a){
	FILE * fp = fopen("list.txt","w");
	int i,j;
	i = 1;
	j = amount;
	Student * ts;//temp student;
	char * temp;//用来获取格式字符串 
	while(i<=j)
	{
		temp = (char*)malloc(sizeof(Student)+sizeof(int)+5);//三个空格，一个换行符，一个终止符。
		ts = a->student; 
		sprintf(temp,"%d.%s\t%-3d\t%c\n",i,ts->name,ts->age,ts->grade);
		fputs(temp,fp);
		i++;
		a=a->next;
	 } 
}
bool IfSave(Queue * ps){
	char g;
	printf("是否保存？(Y|N)?\n");
	printf("按其他任意键返回。\n");
	g=getchar();
	if(g=='y'||g=='Y'){
		WriteFile(ps); 
		WriteFile2(ps); 
		return false;
	}
	else if(g=='n' || g=='N'){
		printf("已取消保存。\n");
		return false;
	}
	else
		return true;
}

//调试函数 
//int main() {
//	return 0;
//}
