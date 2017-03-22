#include<stdio.h>
int main()
{

    //字母转数字 
	char a='a';
	char b='c';
	printf("a=%d,%c\nc=%d,%c\n",a,a,b,b);
	printf("待查询字母：");
	
	//数字转字母 
	char e;
	e='\101';
	printf("%x %d %o %c",e,e,e,e);
	
	//任意字幕查十进制代码 
	char joe;
	scanf("%c",&joe);
	printf("结果: %c %d",joe,joe);
	return 0 ;
 } 
