#include"Queuelist.h"
//���к��� 
//Queue * Initialize(Queue *);
//Queue * InsertNode(Queue *);
//Queue * DeleteNode(Queue *);
//bool NodeIsEmpty(Queue *);
//bool EmptyTheQueue(Queue *);
//void ShowQueue(Queue *);
//�ļ���ȡר�ú��� 
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
	printf("�ѳɹ��˳�ϵͳ��\n");
	printf("����������list.txt�в��ġ�\n");
	getchar();
	return 0;
}

Queue * function(Queue * ps){
	char g;
	printf("1.���ѧ��\t2.ɾ��ѧ��\n3.�鿴ѧ���б�\t4.����б�\n");
	printf("������ѡ��(ֱ�ӻس��˳�)��");
	g=getchar();
	while(g!=0 && g!='\n'){
		fflush(stdin);
//		printf("���ԣ�%s\n",ps->student->name);
		switch (g){
			case '1':
				if((ps=InsertNode(ps)) == NULL){
					printf("���ѧ��ʧ�ܣ�\n");
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
				printf("�����Ҫ����б���(y|n):");
				g=getchar();
				fflush(stdin); 
				if(g == 'y' || g == 'Y'){
					EmptyTheQueue(ps);
					break;
				}
				else{
					printf("��ȡ��ִ�и�ѡ�\n");
					break;
				}
			default :printf("������ѡ��ǰ��Ӧ�����֣�\n");
		}
		putchar('\n'); 
		printf("1.���ѧ��\t2.ɾ��ѧ��\n3.�鿴ѧ���б�\t4.����б�\n");
		printf("������ѡ��(ֱ�ӻس��˳�)��");
		g=getchar();
	}
	return ps;
}




