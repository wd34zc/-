//���ݽṹ 
//���ݽṹ����
//����ģ���鵥 
#include<stdio.h>

void show (const struct lib *,int);//�������ݱ�����ı䡣 

struct lib
{
	int pri;
	int num; 
 } ;

int main()
{
	int n;
	printf("���봴�����鱾���ǣ�");
	scanf("%d",&n);
	
	//����ģ���鵥 
	struct lib book[n];
    int i=0;
	while(n!=0 && i<n)
	{
		book[i].pri=20+i*5;
		book[i].num=i+1;
		i++;
	}
	printf("������ϣ�\n");
	printf("ģ���鵥���£�\n"); 

	
	struct lib * pb;
	pb=book;//Ҳ����д pb=&book[0] 
	//���ⲿ�������������� 
	show(pb,n); //��ָ�봫������ 
	
	printf("��ϣ�"); 
	return 0;
}

void show(const struct lib * book,int n)
{
	int i=0;
	while (i<n)
	{
		printf("book%d joe%d %d\n",(book+i)->num,(book+i)->num,(book+i)->pri);
		i++;
	}
}
