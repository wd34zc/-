/*����һ���ļ�
  ��¼��������ļ��Ĵ�����
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
	
	//��¼���� 
	rewind(fp);
	while((ch=getc(fp))!= EOF)
		if(ch=='\n') 
		    count++;
	fprintf(fp,"this is the %d time(s) you have open it.\n",count);//�ļ��ı䣬�㷨�Ѳ������� 
	
	//��������
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
	
	//������ݵ���Ļ 
	rewind(fp);
	while((ch=getc(fp))!= EOF)
	  putchar(ch); 
	  
	//�ر��ļ�
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
	
	getchar(); 
	return 0; 	    
 } 
