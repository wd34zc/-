/*����һ���ļ�
  ��¼��������ļ��Ĵ�����
*/ 
//�����붯̬�ڴ棬����ַ���������ָ�롣 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE * open(FILE *,char * ) ;
char ch;
int main()
{
	FILE *fp;
	size_t tybe=sizeof("text.txt");//ռ���ڴ��С 
	char *pstr=(char *)malloc(tybe) ;//�����ڴ� 
    strcat(pstr,"text.txt");//���ַ����Ž�ȥ 
	fp=open(fp,pstr);//���ó��� 
	free(pstr); //�ͷ��ڴ� 
	return 0; 	    
 } 	
	
	
FILE * open(FILE * fp,char * str)
{
	puts(str);	
	//���ļ�
	//if((fp=fopen(str,"w+")) == NULL)
	  //fputs("  Error to open the file\n",stdout);
	return fp;
}
	


