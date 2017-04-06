/*
 函数和指针
 void *foo(void * vp) ;
	其实本质上它是一个指针变量 
	可以作为函数参数传递
	可以作为函数参数，使局部函数 跨 作用域运行 
*/ 

#include<stdio.h>
int add(int,int);
int minus(int,int);
void show2(void (*)(void)); 

int main()
{
	//基础的函数指针 
	int (*pf)(int,int);//申明一个函数指针 
	int a=3,b=1;
	
	pf = add;//指针指向add 函数 
	printf("%d\n",pf(a,b));
	pf = minus;//指针指向minus函数 
	printf("%d\n",pf(a,b));
	
	//进阶版 
	void (*ps)(void);//申明一个指针函数 
	void show1(void)  
	{
		printf("这是一个只能在main读取的函数。\n");
	}
	show2(&show1); //传递指向执行函数的指针 
}

int add(int a,int b){
	return a+b;
}

int minus(int a,int b){
	return a-b;
}

void show2(void (*f)(void)){ 
	printf("正在读取main的函数：\n"); 
	f(); //通过地址可以跨作用域调用函数 
}
