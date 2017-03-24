//数据结构 
//数据结构数组
//创建模拟书单 
#include<stdio.h>

void show (const struct lib *,int);//避免数据被意外改变。 

struct lib
{
	int pri;
	int num; 
 } ;

int main()
{
	int n;
	printf("你想创建的书本数是：");
	scanf("%d",&n);
	
	//创建模拟书单 
	struct lib book[n];
    int i=0;
	while(n!=0 && i<n)
	{
		book[i].pri=20+i*5;
		book[i].num=i+1;
		i++;
	}
	printf("创建完毕！\n");
	printf("模拟书单如下：\n"); 

	
	struct lib * pb;
	pb=book;//也可以写 pb=&book[0] 
	//用外部函数来读出名单 
	show(pb,n); //用指针传递数据 
	
	printf("完毕！"); 
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
