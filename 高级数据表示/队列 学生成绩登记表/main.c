#include"Queuelist.h"
//队列函数 
//Queue * Initialize(Queue *);
//Queue * InsertNode(Queue *);
//Queue * DeleteNode(Queue *);
//bool NodeIsEmpty(Queue *);
//bool EmptyTheQueue(Queue *);
//void ShowQueue(Queue *);
//文件读取专用函数 
//bool IfSave(Queue *);

Queue * function(Queue*);
int main(){
	Queue * ps;
	ps = Initialize(ps);		
	ShowQueue(ps); 
	do{
		fflush(stdin);
		ps=function(ps);
	}while(IfSave(ps));
	EmptyTheQueue(ps);
	printf("已成功退出系统。\n");
	printf("名单可以在list.txt中查阅。\n");
	getchar();
	return 0;
}

Queue * function(Queue * ps){
	char g;
	printf("1.添加学生\t2.删除学生\n3.查看学生列表\t4.清空列表\n");
	printf("请输入选项(直接回车退出)：");
	g=getchar();
	while(g!=0 && g!='\n'){
		fflush(stdin);
//		printf("调试：%s\n",ps->student->name);
		switch (g){
			case '1':
				if((ps=InsertNode(ps)) == NULL){
					printf("添加学生失败！\n");
					break;
				}
				ShowQueue(ps);
				break;
			case '2':
				ps=DeleteNode(ps);
				ShowQueue(ps);
				break;
			case '3':
				ShowQueue(ps);
				break;
			case '4':
				printf("你真的要清空列表吗？(y|n):");
				g=getchar();
				fflush(stdin); 
				if(g == 'y' || g == 'Y'){
					EmptyTheQueue(ps);
					break;
				}
				else{
					printf("已取消执行该选项。\n");
					break;
				}
			default :printf("请输入选项前对应的数字！\n");
		}
		putchar('\n'); 
		printf("1.添加学生\t2.删除学生\n3.查看学生列表\t4.清空列表\n");
		printf("请输入选项(直接回车退出)：");
		g=getchar();
	}
	return ps;
}




