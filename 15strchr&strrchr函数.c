/*
    strchr函数的试用
      strchr(函数,'字符')
    在函数中寻找第一次出现的该字符，并返回该字符地址。
	例子：十七行和十八行
*/ 
    
#include<stdio.h>
#include<string.h>//不能省 
#define SIZE 30

int main()
{
	char a[SIZE]={"i love you"};
	puts (a);
	char * find1,* find2;
	find1=strchr(a,'v');//存在 
	find2=strchr(a,'d');//不存在 
	printf("%c\n",*find1);//输出V 
    puts (find2);//因为不存在d，所以直接跳过 
	puts (find1);//输出v以及后面内容，直到空字符结束。 
	return 0;
 } 
 
 /*
     strrchr函数与strchr函数类似
	     区别：
		      strchr搜寻第一次出现的指定字符
			  strrchr搜寻最后一次出现的指定字符 
*/ 
