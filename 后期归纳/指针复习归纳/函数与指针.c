/*
 ������ָ�� 
*/ 

#include<stdio.h>
int add(int,int);
int minus(int,int);

int main()
{
	int (*pf)(int,int);//����һ������ָ�� 
	int a=3,b=1;
	pf = add;//ָ��ָ��add ���� 
	printf("%d\n",pf(a,b));
	pf = minus;//ָ��ָ��minus���� 
	printf("%d\n",pf(a,b));
}

int add(int a,int b)
{
	return a+b;
}

int minus(int a,int b)
{
	return a-b;
}
