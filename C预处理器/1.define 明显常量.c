/*
 CԤ������ ֮ #define 
 �����֣�
 	��һ���֣�ָ��#define ����
	�ڶ����֣��������ѭ�����������򣩣��ֳ�Ϊ �ꡣ 
	�������֣��滻���б�����塣 
*/
#include<stdio.h> 
#define TWO 2
#define FOUR TWO*TWO
#define PF ("x is %d\n",x) //������������ 
#define PF2 printf("x is %d\n",x) //������������ 
#define PF3 "������ô������\
ȥ������\n" //��б�ܼӿո� �൱�ڻ��С� 

int main()
{
	int x =TWO;
	printf PF;
	x=FOUR;
	PF2;
	printf(PF3);
	return 0; 
}
