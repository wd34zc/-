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
	if((fp=fopen("recorder.txt","a+")) == NULL)
	  fputs("_ERROR:FOPEN\n",stdout);
	  
	//初始化文件
	if(fseek(fp,0,SEEK_SET)) 
	     puts("_ERROR:FEEK_SET\n");		
    if( (ch=getc(fp))  == EOF)
	  {
		 fputs("here is the times you have open the file.\n",fp);
		 puts("初始化成功！\n");
	  }
	  
	//关闭文件
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
	 
	return 0; 	    
 } 
