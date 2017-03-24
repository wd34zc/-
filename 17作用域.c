//作用域的讲解： 
// 代码块作用域、函数原型作用域、文件作用域 
#include<stdio.h>
int a=1;//文件作用域
      //在整个文件都能用到a，不用重新申明。
int joe(int*b);//函数原型作用域
              //只在这个函数中有效，可以直接写成：
			  //    int joe(int *)
int main()
{
	int c=3;//代码块作用域， 只在花括号这个代码块中起效。 
	int d;
	d=joe(&c);
	printf("a=%d\n",a);
	//printf("b=%d",b);//error！ b只在joe函数有效，此处已超出其作用域 
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	return 0; 
 } 

int joe(int*b)
{
	printf("b=%p\n",b);
	return *b;
}
