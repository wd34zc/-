/*����һ���ļ�
  ��¼��������ļ��Ĵ�����
*/ 

#include<stdio.h>
FILE * open(FILE *) ;
void times(FILE *);
void close(FILE *);

int main()
{
	FILE *fp;
    fp=open(fp);
	times(fp);
	close(fp);	 
	return 0; 	    
 } 
 
 
 FILE * open(FILE * fp)
 {
 	char ch;
 	
 	//���ļ�
	if((fp=fopen("recorder.txt","a+")) == NULL)
	  fputs("_ERROR:FOPEN\n",stdout);
	  
	//��ʼ���ļ�
	if(fseek(fp,0,SEEK_SET)) 
	     puts("_ERROR:FEEK_SET\n");		
    if( (ch=getc(fp))  == EOF)
	  {
		 fputs("here is the times you have open the file.\n",fp);
		 puts("��ʼ���ɹ���\n");
	  }
	  
	  return fp;
  } 
  
  
  void times(FILE * fp)
  {
  	char ch;
  	int count=0;
  	
	  //��¼����
	rewind(fp);
	while((ch=getc(fp))!= EOF)
		if(ch=='\n') 
		    count++;
	fprintf(fp,"  this is the %d time(s) you have open it.\n",count);
	
	//������ݵ���Ļ 
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
