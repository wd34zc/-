//外部链接 
#include<stdio.h>
int a=1;
void joe();
int main()
{
	printf("未在代码内部声明时：%d\n",a);
	extern int a;
	printf("已在代码内部声明时：%d\n",a);
	joe();
	printf("在joe函数代码把a改为2后,main函数显示：a=%d\n",a); 
	return 0;
}

void joe()
{
	//extern int a=2; //error 
	extern int a;
	a=2;
	printf("在joe函数代码把a改为2后,joe函数显示：a=%d\n",a);
}

/*
可正常运行！ 
说明：
1.还函数内可以不用再次声明。
2.任意代码块可以修改外部链接的值。 
ps:
extern 是申明前面已有定义的意思，
因此外部定义时不建议使用。内部函
数使用可增强可读性，建议使用。 
*/
