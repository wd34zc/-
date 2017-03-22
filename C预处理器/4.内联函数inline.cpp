/*
 C预处理 之 内联函数
 inline  
 	具有内部链接，外部文件不可用。
	 一般写在头文件列表
	 只建议在小型函数中使用。 
*/ 

#include<stdio.h>
inline void change(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
 } 
 int main()
 {
 	int a,b;
 	a=3;
 	b=5;
 	printf("a=%d,b=%d\n",a,b);
 	change(&a,&b);
 	printf("a=%d,b=%d\n",a,b);
 }
