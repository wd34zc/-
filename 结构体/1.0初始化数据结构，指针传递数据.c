//数据结构 
//用结构或指针来传输数据 
#include<stdio.h>

void show (const struct lib *);//避免数据被意外改变。 

struct lib
{
	char til[20];
	char aut[10];
	int pri;
 } ;

int main()
{
	//初始化书本 
	struct lib book[5]={
	{"book1","joe1",20},
	{"book2","joe2",25},
	{"book3","joe3",30},
	{"book4","joe4",35},
	{"book5","joe5",40},
	};
    
    //打出名单 
	int i=0;
	while (i<5)
	{
		printf("%s %s %d\n",book[i].til,book[i].aut,book[i].pri);
		i++;
	}
	
	struct lib * pb;
	pb=book;//也可以写 pb=&book[0] 
	
	//用外部函数来读出名单 
	show(pb); //用指针传递数据 
	
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
