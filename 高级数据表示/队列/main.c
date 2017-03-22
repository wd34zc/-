#define TEXT_Q_
#include"head.h"
int main()
{
	Queue movies;//电影队列
	puts("欢迎来到电影记录程序。");
	puts("初始化列表完毕");
    InitializeQueue(&movies);
	GetMovies(&movies);
	putchar('\n'); 
	run(&movies);
    puts("是否保存当前列表？(Y保存 N取消)");
	if(getchar()=='y'||getchar()=='Y')
	   FileMovies(&movies);
	puts("拜拜~");
	 return 0;
}
	    
