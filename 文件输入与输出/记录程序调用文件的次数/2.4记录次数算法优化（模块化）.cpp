/*����һ���ļ�
  ��¼��������ļ��Ĵ�����
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
	//fp1��¼������fp2��¼����һ�����ݣ�fp3��¼�������ݡ� 
	char y;//�ж��Ƿ�Ҫ�����¼ 	
	int n;//��¼��N�ε����ļ� 
	
	fp1=open1(fp1);//��times�ļ�����ʼ���ļ�
	n=times(fp1);//��¼�����ļ������������ش�����ֵ 
	read(fp1);//����ļ����ݵ���Ļ 
	close(fp1);//�ر��ļ�	
	fp2=open2(fp2);//�򿪼�¼���ݵ��ļ���
	get(fp2,n);//��ȡҪ��¼������ 
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
 	
 	//���ļ�
	if((fp=fopen("times.txt","a+")) == NULL)
	  fputs("_ERROR:FOPEN FILE1\n",stdout);
	  
	//��ʼ���ļ�
	if(fseek(fp,0,SEEK_SET)) 
	     puts("_ERROR:FEEK_SET\n");		
    if( (ch=getc(fp))  == EOF)
	  {
		 fputs("Here is the times you have open the file.\n",fp);
		 puts("��ʼ���ɹ���\n");
	  }
	  
	  return fp;
  } 
  

  
  int times(FILE * fp)
  {
  	//char ch;
  	int count=0;
  	
	  //��¼����
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
 	
 	//���ļ�
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
  	//������ݵ���Ļ 
  	puts("");
	rewind(fp);
	while((ch=getc(fp))!= EOF)
	  putchar(ch);
  }
  
  void close(FILE * fp) 
  {
  	//�ر��ļ�
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
  }
