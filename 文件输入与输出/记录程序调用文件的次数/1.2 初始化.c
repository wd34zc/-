/*����һ���ļ�
  ��¼��������ļ��Ĵ�����
*/ 

#include<stdio.h>


int main()
{
	FILE *fp;
	char ch;
	int count=0;
	
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
	  
	//�ر��ļ�
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
	 
	return 0; 	    
 } 
