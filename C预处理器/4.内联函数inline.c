/*
 CԤ���� ֮ ��������
 inline  
 	�����ڲ����ӣ��ⲿ�ļ������á�
	 һ��д��ͷ�ļ��б�
	 ֻ������С�ͺ�����ʹ�á� 
*/ 

#include<stdio.h>
inline void change(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
 } 
 int main()
 {
 	int a,b;
 	a=3;
 	b=5;
 	printf("a=%d,b=%d\n",a,b);
 	change(&a,&b);
 	printf("a=%d,b=%d\n",a,b);
 }
