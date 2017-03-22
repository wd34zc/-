/*
 C预处理器 之 其他指令
 	#undef //用于取消 #define 定义 
	
	#ifdef //相当于if函数 
	#ifndef//如果没有定义 
	#else  //相当于else函数 
	#elif  //相当于 else if函数 
	#endif //用于结束if语句 
*/ 

#define A //定义A是1 

#ifndef A //如果没有定义，那么默认定义A 
	#define A 
#endif

#ifdef  A //如果定义是A，包含以下头文件 
	#include<stdio.h> 
#elif B //如果定义是B，包含以下头文件 
	#include<stdio.h> 
	#include<stdlib.h> 
#else  //如果定义既不是A也不是B，包含以下头文件 
	#include<stdio.h> 
	#include<stdlib.h> 
	#include<string.h> 
#endif

int main()
{
	printf("Hello World!\n"); 
	return 0; 
}
