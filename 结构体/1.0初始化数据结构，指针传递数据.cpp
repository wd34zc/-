//���ݽṹ 
//�ýṹ��ָ������������ 
#include<stdio.h>

void show (const struct lib *);//�������ݱ�����ı䡣 

struct lib
{
	char til[20];
	char aut[10];
	int pri;
 } ;

int main()
{
	//��ʼ���鱾 
	struct lib book[5]={
	{"book1","joe1",20},
	{"book2","joe2",25},
	{"book3","joe3",30},
	{"book4","joe4",35},
	{"book5","joe5",40},
	};
    
    //������� 
	int i=0;
	while (i<5)
	{
		printf("%s %s %d\n",book[i].til,book[i].aut,book[i].pri);
		i++;
	}
	
	struct lib * pb;
	pb=book;//Ҳ����д pb=&book[0] 
	
	//���ⲿ�������������� 
	show(pb); //��ָ�봫������ 
	
	return 0;
}

void show(const struct lib * book)
{
	int i=0;
	while (i<5)
	{
		printf("%s %s %d\n",(book+i)->til,(book+i)->aut,(book+i)->pri);
		i++;
	}
}
