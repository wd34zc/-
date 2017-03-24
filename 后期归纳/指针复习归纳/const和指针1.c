/*
 const 和 指针 
 指向常量的指针 和 普通数组 
*/ 
#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};
	int b[3]={3,4,5};
	
	const int * pa; //声明 指向常量的指针 
	pa = a;
	pa = b; //指向常量的指针 可以改变指向的数组 
	//*pa = 9; //不能通过 指向常量的指针 来修改值！ 
	//pa[2] = 9;
	a[2] = 9; //数组仍可以修改值 
	
	add(a+1,a+2);
}

int add(const int * a,const int * b)
{
	//a=5; 通过const来保护数据不被修改 
	return 0;
 } 
