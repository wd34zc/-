/*
    strchr����������
      strchr(����,'�ַ�')
    �ں�����Ѱ�ҵ�һ�γ��ֵĸ��ַ��������ظ��ַ���ַ��
	���ӣ�ʮ���к�ʮ����
*/ 
    
#include<stdio.h>
#include<string.h>//����ʡ 
#define SIZE 30

int main()
{
	char a[SIZE]={"i love you"};
	puts (a);
	char * find1,* find2;
	find1=strchr(a,'v');//���� 
	find2=strchr(a,'d');//������ 
	printf("%c\n",*find1);//���V 
    puts (find2);//��Ϊ������d������ֱ������ 
	puts (find1);//���v�Լ��������ݣ�ֱ�����ַ������� 
	return 0;
 } 
 
 /*
     strrchr������strchr��������
	     ����
		      strchr��Ѱ��һ�γ��ֵ�ָ���ַ�
			  strrchr��Ѱ���һ�γ��ֵ�ָ���ַ� 
*/ 
