/*
 C预处理器 之 #define 
 三部分：
 	第一部分：指令#define 自身
	第二部分：缩略语（遵循变量命名规则），又称为 宏。 
	第三部分：替换的列表或主体。 
*/
#include<stdio.h> 
#define TWO 2
#define FOUR TWO*TWO
#define PF ("x is %d\n",x) //这里必须加括号 
#define PF2 printf("x is %d\n",x) //这里必须加括号 
#define PF3 "世界那么大，我想\
去看看！\n" //反斜杠加空格 相当于换行。 

int main()
{
	int x =TWO;
	printf PF;
	x=FOUR;
	PF2;
	printf(PF3);
	return 0; 
}
