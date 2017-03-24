#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

void open(char * ) ;
char ch;
int main()
{
	char *pstr=(char *)malloc(sizeof("text.txt")) ;//申请内存 
	//pstr="text.txt";              //error! 
	strcpy(pstr,"text.txt");//把字符串复制进去 
	open(pstr);//调用程序 	
	free(pstr); //释放内存 
	return 0; 	    
 } 	
	
	
void open(char * str)
{
	puts(str);
}
	
