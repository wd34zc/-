#include<stdio.h>
#include<string.h>
int main()
{
	char a[30]={"i am a boy."};
	char * b;
	b=a;//������ָ�����ͬ�� 
	printf("%s \n%s",a,b);
/* 
    error�� 
	char��* str;//ֻ������str���һ���ֽڵ�ַ 
	strcpy(str,"i am a good boy");//str�޷������ô���ֽڵ�ַ 
*/ 
	return 0; 
 } 
