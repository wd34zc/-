#include<stdio.h>
int main()
{

    //��ĸת���� 
	char a='a';
	char b='c';
	printf("a=%d,%c\nc=%d,%c\n",a,a,b,b);
	printf("����ѯ��ĸ��");
	
	//����ת��ĸ 
	char e;
	e='\101';
	printf("%x %d %o %c",e,e,e,e);
	
	//������Ļ��ʮ���ƴ��� 
	char joe;
	scanf("%c",&joe);
	printf("���: %c %d",joe,joe);
	return 0 ;
 } 
