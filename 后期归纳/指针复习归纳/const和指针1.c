/*
 const �� ָ�� 
 ָ������ָ�� �� ��ͨ���� 
*/ 
#include<stdio.h>
int add(const int * ,const int *) ;
int main()
{
	int a[3]={5,6,7};
	int b[3]={3,4,5};
	
	const int * pa; //���� ָ������ָ�� 
	pa = a;
	pa = b; //ָ������ָ�� ���Ըı�ָ������� 
	//*pa = 9; //����ͨ�� ָ������ָ�� ���޸�ֵ�� 
	//pa[2] = 9;
	a[2] = 9; //�����Կ����޸�ֵ 
	
	add(a+1,a+2);
}

int add(const int * a,const int * b)
{
	//a=5; ͨ��const���������ݲ����޸� 
	return 0;
 } 
