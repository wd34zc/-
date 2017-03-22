/*
 主函数定义指针，子函数申请内存错误。
 	概念补充：
	 	可以通过指针传递值是因为：
			我们改变了指针所指的地址对应的值，
			但我们并没有改变指针的值（既指针所指的地址）。 
	错误解释：			  
 		虽然主函数定义并传递了指针，
		但是子函数申请内存时，在获取内存后改变了子函数指针的指向地址，
		因此该空间对主函数指针无效！
	修改方案：
		 1.通过传递二级指针来进行传递。 
		 2.通过返回 已指向内存的指针 来传递。 
*/ 


#include<stdio.h>
#include<stdlib.h> 
typedef struct NODE{
	char * student;
	struct NODE * next;
}Queue;
void Initialize(Queue * a);
int main()
{
	char g; 
	Queue * ps;
	Initialize(ps);	
	
	//程序奔溃 
	if(ps->student == NULL) //ps仍然是野指针，因此不能获取其地址对应内容。 
		printf("初始化失败！\n"); 

	getchar();
	return 0;
}

void Initialize(Queue * a) {
	
	a=(Queue *)malloc(sizeof(Queue *)); // 子函数成功获取内存空间 
	
	if( a == NULL )
	{
		printf("子函数初始化失败！\n");
		return ;
	}
	else
		printf("子函数初始化成功！\n");
	a->next = NULL;
	a->student = NULL;
	return ;
}
