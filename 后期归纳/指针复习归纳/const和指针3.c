/*
 const 和 指针 3 
 其他 
*/ 

#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};//普通数组 
	const int b[3]={3,4,5};//常量数组	
	
	//int * const pa; 必须一开始指向一个数组且不能改变指向	
	int * const pa = a;	
	//pa = b;
	*(pa+1) = 5;//但可以修改值！ 
	
	const int * const pb = a;
	//pb = b;
	//pb+1 = 5;
	
	return 0;
}
