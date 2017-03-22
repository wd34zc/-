/*创建一个文件
  记录程序调用文件的次数。
*/ 
//先申请动态内存，存放字符串，传递指针。 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE * open(FILE *,char * ) ;
char ch;
int main()
{
	FILE *fp;
	size_t tybe=sizeof("text.txt");//占用内存大小 
	char *pstr=(char *)malloc(tybe) ;//申请内存 
    strcat(pstr,"text.txt");//把字符串放进去 
	fp=open(fp,pstr);//调用程序 
	free(pstr); //释放内存 
	return 0; 	    
 } 	
	
	
FILE * open(FILE * fp,char * str)
{
	puts(str);	
	//打开文件
	//if((fp=fopen(str,"w+")) == NULL)
	  //fputs("  Error to open the file\n",stdout);
	return fp;
}
	


