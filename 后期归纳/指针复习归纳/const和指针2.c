/*
 const 和 指针 2
 常量 与 指针 
*/ 
#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};//普通数组 
	const int b[3]={3,4,5};//常量数组	
	int * pa; //普通指针 
	const int * pb;//指向常量的指针 
	
	pa = a; 
	//pa = b; 普通指针不能指向 常量 
	
	pb = a;
	pb = b;  // 常量只能由 指向常量的指针 来指向。 
	
	return 0;
}
