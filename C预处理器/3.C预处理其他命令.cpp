/*
 CԤ������ ֮ ����ָ��
 	#undef //����ȡ�� #define ���� 
	
	#ifdef //�൱��if���� 
	#ifndef//���û�ж��� 
	#else  //�൱��else���� 
	#elif  //�൱�� else if���� 
	#endif //���ڽ���if��� 
*/ 

#define A //����A��1 

#ifndef A //���û�ж��壬��ôĬ�϶���A 
	#define A 
#endif

#ifdef  A //���������A����������ͷ�ļ� 
	#include<stdio.h> 
#elif B //���������B����������ͷ�ļ� 
	#include<stdio.h> 
	#include<stdlib.h> 
#else  //�������Ȳ���AҲ����B����������ͷ�ļ� 
	#include<stdio.h> 
	#include<stdlib.h> 
	#include<string.h> 
#endif

int main()
{
	printf("Hello World!\n"); 
	return 0; 
}
