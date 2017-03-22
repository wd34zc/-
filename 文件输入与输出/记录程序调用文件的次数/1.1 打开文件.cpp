/*创建一个文件
  记录程序调用文件的次数。
*/ 

#include<stdio.h>


int main()
{
	FILE *fp;
	char ch;
	int count=0;
	
	//打开文件
	if((fp=fopen("recorder.txt","w+")) == NULL)
	  fputs("  Error to open the file\n",stdout);
	 
	return 0; 	    
 } 
