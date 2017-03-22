#include"QueueList.h"
#define TEST

//�ڲ�����
static Student * GetInformation(void);//��ȡ����ӵ�ѧ������ 
static Queue * PrivateSort(Queue *,Student *);//��˳����������
static Queue * PrivateInsert(Queue * a,Student *s);//aԭ���в���㣬s�Ƕ�Ӧ������Ľṹ�壬����s��Ӧ�Ľڵ�
static Queue * ReadFile(Queue * a);//�ڲ���ȡ�ļ���¼������ 
static bool WriteFile(Queue * a);//�Զ����Ƶ�ģʽ�����List.temp 
static bool WriteFile2(Queue * a);//���ı���ʽ�����list.txt 
extern amount;//ѧ������������ 

//���к��� 
Queue * Initialize(Queue * a) {
	a=(Queue *)malloc(sizeof(Queue *));
	if( a == NULL )
	{
		printf("�Ӻ�����ʼ��ʧ�ܣ�\n");
		return NULL;
	}
	else
		printf("�Ӻ�����ʼ���ɹ���\n");
	a->next = NULL;
	a->student = NULL;
	if(a->student==NULL)
		printf("��ʼ��ѧ�����\n");
	amount = 0;
	printf("��ʼ���ɹ���\n");
	ReadFile(a);
	return a;
}
bool QueueIsEmpty(Queue * a) {
	if(amount == 0)
	{
//		printf("���ԣ�QueueEmpty:�б�Ϊ�գ�\n");
		return true;
	}
	else
		return false;
}
Queue * InsertNode(Queue * a) {
	Student * s;
	//��ȡ ѧ������ 
	while((s=GetInformation()) != NULL){
		a=PrivateSort(a,s);
		putchar('\n');
	}
	//��������� 
	return a;
}
Queue * DeleteNode(Queue * a) {
	char tn[10];
	int i = amount;
	Queue * now = a;//��ʱָ�� 
	Queue * front ; //������һ���ڵ�ĵ�ַ��������
	printf("��������Ҫɾ��ѧ�������֣�");
	gets(tn);
	while(i!=0 && strcmp(tn,now->student->name)!=0) {
		front=now;
		now=now->next;
		i--;
//		printf("���ԣ�%d\n",i);
	}
	//ɾ���׽ڵ� 
	if(i==amount)
	{
		front=now;
		now=now->next; 
		free(front);
		amount--;
		return now;//�����½ڵ��ַ 
	 } 
	//�Ҳ�����Ӧ���ֵĽڵ㡣 
	else if(i==0) {
		printf("���޴���\n");
		return a;
	}
	front->next = now->next;
	free(now);
	amount--;
	printf("ɾ���ɹ�!\n");
	return a;
}
bool EmptyTheQueue(Queue * a) {
	Queue * tq;
	if(QueueIsEmpty(a))
	{
		printf("�б�û�����ݣ�\n");
		return true; 
	}
	printf("��������б�...\n");
	while(amount!=0) {
		
//		printf("���ԣ�\n");
		tq = a;
		a=a->next;
		free(tq);
		amount--;
	}
	printf("������\n");
	return true;
}
void ShowQueue(Queue * a) {
	if(amount == 0)
	{
		printf("�б�Ϊ�գ�\n");
		return;
	}
	int i = amount;
	Student * s;
	printf("Ŀǰ������%d��ѧ����\n",amount);
	while(a!=NULL) {
		s = a->student;
		printf("%-8s %-3d %c\n",s->name,s->age,s->grade);
		i--;
		a=a->next;
	}
	putchar('\n');
	return;
}

//���к����ڲ��������� 
static Student * GetInformation(void){//��ȡ�����ѧ�������� 
	//��ȡѧ����
	char name[10];
	printf("����������(ֱ�ӻس��˳�)��");
	gets(name);
	while(name[0]=='\n'||name[0]==0) {
		return NULL;
	}
	//д��ṹ��
	Student * s; //��ʼ��һ����ʱ�ṹ��
	if((s=(Student *)malloc(sizeof(Student))) == NULL)
	{
		printf("����Student�ռ�ʧ��!\n");
		return NULL;
	}
	strcpy(s->name,name);
	
#ifdef TEST	//���Դ���
		{
			s->age=18;
			s->grade='A'; 
			return s;
		} 
#endif

	//��ȡ���� 
	printf("���������䣺");
	scanf("%d",&s->age) ;
	while(getchar() != '\n')
		continue;
	while(s->age>100 || s->age<1)
	{
		printf("����ķ�Χ��1~100��\n");		 
		printf("����������:");		 
		scanf("%d",&s->age) ;		 
		while(getchar() != '\n')
			continue;
	}
	//��ȡ�ɼ��ȼ� 
	printf("���������ĵȼ�(A,B,C,D)��");
	s->grade=getchar();
	while(!(s->grade>='a'&&s->grade<='d' || s->grade>='A'&&s->grade<='D'))
	{
		fflush(stdin);
		printf("��������ĵȼ������˶��Χ��\n");
		printf("����������:");
		s->grade=getchar();
	}
//	printf("����1\n"); 
	if(s->grade>'D')
		s->grade -= 32;
	fflush(stdin);
	return s;
} 
static Queue * PrivateSort(Queue * a ,Student * s) { //���������� 
	//��Ϊ�ն��У�ֱ�Ӹ�ֵ���� 
	if(QueueIsEmpty(a))
	 {
		 
		a->student = s;
		amount++;
		return a;
	} 
	Queue * now = a;		//���a�ĵ�ǰ�ڵ��ַ
	Queue * front ;			//���a����һ���ڵ��ַ
	int i;					//�ַ����Ƚ�ָ��
	i=strcmp(now->student->name,s->name); //�Ƚ��ַ�����С
	if(i>0) {				//��s�����ַ���С����ֱ����ӵ���ͷ�����ı�a��ָ��
		front = (Queue *)malloc(sizeof(Queue));
		front->student = s;
		front->next = now;//ָ��ԭ�ȵ�һ���ڵ�ĵ�ַ
		amount++;
//		printf("���ԣ���ӿ�ͷ�ɹ���\n");
		return front;//�����½ڵ�ĵ�ַ�� 
	}
	while((i=strcmp(now->student->name,s->name))<0) { //��ת��front��s�����ȵĽڵ�
		if(now->next == NULL) //���a��һ��Ϊ�գ�ֱ����ӵ�ĩβ
			if(PrivateInsert(now,s)!=NULL) {
//				printf("���ԣ����ĩβ�ɹ���\n");
				return a;
			} else {
//				printf("���ԣ����ĩβʧ�ܣ�\n");
				return a;
			}
		front = now; //ָ����һ��
		now = now->next;
	}
	if(i==0) {	//�ַ�����ͬ
		printf("�Ѵ��ڸ�ͬѧ����Ϣ��\n");
		printf("\tԭ��Ϣ��%s %d %c\n",now->student->name,now->student->age,now->student->grade);
		printf("\t����Ϣ��%s %d %c\n",s->name,s->age,s->grade); 
		printf("�������Ƿ���Ҫ����ԭ��Ϣ��\n");
		printf("(Yȷ��,�����ȡ����)");
		{
			char g=getchar();
			fflush(stdin);
			if(g=='y'||g=='Y')
				now->student = s;
			printf("���ǳɹ���\n");
		}
		return a;
	} else if(i>0) { //a������ǡ�ñ�S��
		PrivateInsert(front,s);
//		printf("���ԣ������м�ɹ���");
		return a;
	} else {
		printf("���ԣ��ڲ����뺯���쳣��\n");
		return a;
	}
}
static Queue * PrivateInsert(Queue * a,Student *s) { //����ڵ㺯�� 
	Queue * b = (Queue *)malloc(sizeof(Queue));
	b->student = s;
	b->next = a->next;
	a->next = b;
	amount++;
	return b;
}
	
//�ļ���ȡд�뺯�� 
static Queue * ReadFile(Queue * a){
	FILE*fp=fopen("List.temp","r+");
	if(fp==NULL){
		printf("û�м�¼�ļ���\n");
		return NULL;
	}
	else
	{
		printf("��ȡ������...\n");
	}
	Student * s = (Student *)malloc(sizeof(Student));
	while(fread(s,sizeof(Student),1,fp)!=0)
	{
		a=PrivateSort(a,s);
		s = ( Student * )malloc( sizeof(Student) );
	}
	free(s); 
	printf("��ȡ��ϣ�\n");
//	ShowQueue(a);
	return a;
}
static bool WriteFile(Queue * a){
	FILE*fp=fopen("List.temp","wb");
	printf("����������...\n");
	while(a!=NULL)
	{
//		printf("���ԣ�����ļ�������\n"); 
//		printf("���ԣ�%s\n",a->student->name);
		fwrite(a->student,sizeof(Student),1,fp);
		printf("%sͬѧ���ݱ���ɹ���\n",a->student->name);
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
	char * temp;//������ȡ��ʽ�ַ��� 
	while(i<=j)
	{
		temp = (char*)malloc(sizeof(Student)+sizeof(int)+5);//�����ո�һ�����з���һ����ֹ����
		ts = a->student; 
		sprintf(temp,"%d.%s\t%-3d\t%c\n",i,ts->name,ts->age,ts->grade);
		fputs(temp,fp);
		i++;
		a=a->next;
	 } 
}
bool IfSave(Queue * ps){
	char g;
	printf("�Ƿ񱣴棿(Y|N)?\n");
	printf("��������������ء�\n");
	g=getchar();
	if(g=='y'||g=='Y'){
		WriteFile(ps); 
		WriteFile2(ps); 
		return false;
	}
	else if(g=='n' || g=='N'){
		printf("��ȡ�����档\n");
		return false;
	}
	else
		return true;
}

//���Ժ��� 
//int main() {
//	return 0;
//}
