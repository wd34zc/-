/*
 const �� ָ�� 3 
 ���� 
*/ 

#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};//��ͨ���� 
	const int b[3]={3,4,5};//��������	
	
	//int * const pa; ����һ��ʼָ��һ�������Ҳ��ܸı�ָ��	
	int * const pa = a;	
	//pa = b;
	*(pa+1) = 5;//�������޸�ֵ�� 
	
	const int * const pb = a;
	//pb = b;
	//pb+1 = 5;
	
	return 0;
}
