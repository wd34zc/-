/*统计字数：
原理：通过计算字与字之间的空格推断出字数，
      实际就是检测空格的数量。
操作：申明一个量，用来检测输入的符号是字符还是空格
      再申明一个量，用来检测空格前是否是字符
	  设立循环
结束*/
#include<stdio.h>
#include<ctype.h>
#define stop '|'
int main()
{
    printf("您好！\n欢迎进入字数（仅单词）统计系统。\n输入“|”进行统计。\n请输入正文：\n");
	char a;//用于检测字符
	int b=0;//设立变量
	int c=0;//设立字数 
	while ((a=getchar())!=stop)
	{
		if(!isspace(a))
		b=1;
		
		if(isspace(a) && b==1)
		{
			b=0;
			c++; 
		}
	 }
	 printf("总单词数（不包括标点符号）：%d",c);
	 return 0;
}  
