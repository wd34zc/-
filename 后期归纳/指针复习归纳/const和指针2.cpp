/*
 const �� ָ�� 2
 ���� �� ָ�� 
*/ 
#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};//��ͨ���� 
	const int b[3]={3,4,5};//��������	
	int * pa; //��ָͨ�� 
	const int * pb;//ָ������ָ�� 
	
	pa = a; 
	//pa = b; ��ָͨ�벻��ָ�� ���� 
	
	pb = a;
	pb = b;  // ����ֻ���� ָ������ָ�� ��ָ�� 
	
	return 0;
}
