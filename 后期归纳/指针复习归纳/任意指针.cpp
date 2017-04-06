/*
任意指针：void * vp;
	任意指针都可以接受任何指针
	输出时需要强行转换为对应的数据类型 
*/

#include<stdio.h>
#include<stdlib.h> 
void IsNullPoint(void * p);
void showInt(void * vp);
void showFloat(void * vp);
void showString(void * vp);

int main()
{
	//指向普通变量 
	void (*show)(void *); //申明一个指针函数 
	void * vp = NULL; //申明一个任意指针  
	
	IsNullPoint(vp);
	
	int i = 10;
	vp = &i;  	
	show = showInt;
	show(vp);
	
	float f = 20;
	vp = &f;
	show = showFloat;
	show(vp);
	
	char str[]="i am a stupid boy.";
	vp = str;
	show = showString;
	show(vp);
	
	IsNullPoint(vp);
	
	// 强行指向 函数
	void * ps(); //申明一个任意指针 
	ps = (void*)showString;
	( (void (*)(void *)) ps)(vp); 
	//其实这里用什么指针都可以完成，但必须要强制转换。 
	 
	return 0;
 } 
 
void IsNullPoint(void * p) //可以判断所有的指针是否为空 
 {
 	if(p == NULL)
 		printf("空指针！\n");
 	else
 		printf("指向内存的指针。\n");
  } 
  
  void showInt(void * vp)
  {
  	printf("%d\n",*(int *)vp);
  }
  
  void showFloat(void * vp)
  {
  	printf("%f\n",*(float *)vp);
  }
  
  void showString(void * vp)
  {
  	printf("%s\n",vp);
  }
