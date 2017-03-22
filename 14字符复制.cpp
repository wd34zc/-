#include<stdio.h>
#include<string.h>
int main()
{
	char a[30]={"i am a boy."};
	char * b;
	b=a;//数组与指针基本同级 
	printf("%s \n%s",a,b);
/* 
    error！ 
	char　* str;//只分配了str存放一个字节地址 
	strcpy(str,"i am a good boy");//str无法存放那么多字节地址 
*/ 
	return 0; 
 } 
