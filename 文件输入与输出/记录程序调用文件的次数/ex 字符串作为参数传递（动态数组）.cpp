#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

void open(char * ) ;
char ch;
int main()
{
	char *pstr=(char *)malloc(sizeof("text.txt")) ;//�����ڴ� 
	//pstr="text.txt";              //error! 
	strcpy(pstr,"text.txt");//���ַ������ƽ�ȥ 
	open(pstr);//���ó��� 	
	free(pstr); //�ͷ��ڴ� 
	return 0; 	    
 } 	
	
	
void open(char * str)
{
	puts(str);
}
	
