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
	 printf("%d",c);
	 return 0;
}  
