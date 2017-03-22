/*创建一个文件
  记录程序调用文件的次数。
  2.0 
*/ 

#include<stdio.h>
FILE * open1(FILE *) ;
FILE * open2(FILE *) ;
int times(FILE *);
void close(FILE *);
void read(FILE *); 
void record(FILE *,FILE *);
void get(FILE *,int );
char ch;

int main()
{
	FILE *fp1, *fp2, *fp3;
	//fp1记录次数，fp2记录最新一次内容，fp3记录所有内容。 
	char y;//判断是否要保存记录 	
	int n;//记录第N次调用文件 
	
	fp1=open1(fp1);//打开times文件并初始化文件
	n=times(fp1);//记录调用文件次数，并返回次数的值 
	read(fp1);//输出文件内容到屏幕 
	close(fp1);//关闭文件	
	fp2=open2(fp2);//打开记录内容的文件。
	get(fp2,n);//获取要记录的内容 
	read(fp2);
	close(fp2);
	fp3=open2(fp3);
	if((y=getchar())=='y');
	   record(fp2,fp3);	 
	return 0; 	    
 } 
 
 
 FILE * open1(FILE * fp)  
 {
 	//char ch;
 	
 	//打开文件
	if((fp=fopen("times.txt","a+")) == NULL)
	  fputs("_ERROR:FOPEN FILE1\n",stdout);
	  
	//初始化文件
	if(fseek(fp,0,SEEK_SET)) 
	     puts("_ERROR:FEEK_SET\n");		
    if( (ch=getc(fp))  == EOF)
	  {
		 fputs("Here is the times you have open the file.\n",fp);
		 puts("初始化成功！\n");
	  }
	  
	  return fp;
  } 
  

  
  int times(FILE * fp)
  {
  	//char ch;
  	int count=0;
  	
	  //记录内容
	rewind(fp);
	while((ch=getc(fp))!= EOF)
		if(ch=='\n') 
		    count++;
	fprintf(fp,"  This is the %d time(s) you have open it.\n",count);
		 
	return count;  	
  }
  
     
   FILE * open2(FILE * fp) 
 {
 	//char ch;
 	
 	//打开文件
	if((fp=fopen("latest.txt","w+")) == NULL)
	  fputs("_ERROR:FOPEN FILE2\n",stdout);
	  
	return fp;
 }
  
  
  void get(FILE * fp,int n)
  {
  	//char ch;
  	int count=0;
    fprintf(fp,"This is the %d time(s) you have open it.\n",n); 
    fputs("#Content:\n",fp);
    puts("Content:") ;
	fputs("  ",fp);
	while((ch=getc(stdin)) != EOF)
  	{
		putc(ch,fp);
  		count++;
  		if(!(count%28))
  		  {
  		  	putc('\n',fp);
  		  	fputs("  ",fp);
		   }
	}
  }
  
  void record(FILE * fp2,FILE *fp3)
  {
  	while((ch=getc(fp2)) != EOF)
	{
		putc(ch,fp3);
	 } 
	 putc('\n',fp3);
	 puts("OK!");
  }
  
  void read(FILE * fp)
  {
  	//输出内容到屏幕 
  	puts("");
	rewind(fp);
	while((ch=getc(fp))!= EOF)
	  putchar(ch);
  }
  
  void close(FILE * fp) 
  {
  	//关闭文件
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
  }
