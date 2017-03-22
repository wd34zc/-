/*
 函数和指针 
*/ 

#include<stdio.h>
int add(int,int);
int minus(int,int);

int main()
{
	int (*pf)(int,int);//申明一个函数指针 
	int a=3,b=1;
	pf = add;//指针指向add 函数 
	printf("%d\n",pf(a,b));
	pf = minus;//指针指向minus函数 
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
