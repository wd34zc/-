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
	if((fp=fopen("recorder.txt","w+")) == NULL)
	  fputs("  Error to open the file\n",stdout);
	 
	return 0; 	    
 } 
