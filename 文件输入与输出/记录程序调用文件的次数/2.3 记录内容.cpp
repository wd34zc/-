/*创建一个文件
  记录程序调用文件的次数。
*/ 

#include<stdio.h>
#define MAX 10 

int main()
{
	FILE *fp;
	char ch;
	char line[MAX] ;
	int count=0;
	int i=0;
	
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
	
	//记录次数 
	rewind(fp);
	while((ch=getc(fp))!= EOF)
		if(ch=='\n') 
		    count++;
	fprintf(fp,"this is the %d time(s) you have open it.\n",count);//文件改变，算法已不成立。 
	
	//输入内容
	puts("content:(press Ctrl^z on new line finish the content.)");
	fputs("content:\n",fp);
	fputs("  ",fp);
	while( (ch=getc(stdin)) != EOF )
    {
    	if (ch=='\n') continue;
	    putc(ch,fp);
    	//putc(ch,stdout);
    	i++;
    	if(i%30==0)
    	{   	
    		fputc('\n',fp);
    		fputs("  ",fp);
    		//printf("%d\n",i);
		}
	}
	fputs("\n##FINISH##\n",fp);
	puts("##FINISH##\n"); 
	
	//输出内容到屏幕 
	rewind(fp);
	while((ch=getc(fp))!= EOF)
	  putchar(ch); 
	  
	//关闭文件
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
	
	getchar(); 
	return 0; 	    
 } 
