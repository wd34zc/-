/*
 ������ָ��
 void *foo(void * vp) ;
	��ʵ����������һ��ָ����� 
	������Ϊ������������
	������Ϊ����������ʹ�ֲ����� �� ���������� 
*/ 

#include<stdio.h>
int add(int,int);
int minus(int,int);
void show2(void (*)(void)); 

int main()
{
	//�����ĺ���ָ�� 
	int (*pf)(int,int);//����һ������ָ�� 
	int a=3,b=1;
	
	pf = add;//ָ��ָ��add ���� 
	printf("%d\n",pf(a,b));
	pf = minus;//ָ��ָ��minus���� 
	printf("%d\n",pf(a,b));
	
	//���װ� 
	void (*ps)(void);//����һ��ָ�뺯�� 
	void show1(void)  
	{
		printf("����һ��ֻ����main��ȡ�ĺ�����\n");
	}
	show2(&show1); //����ָ��ִ�к�����ָ�� 
}

int add(int a,int b){
	return a+b;
}

int minus(int a,int b){
	return a-b;
}

void show2(void (*f)(void)){ 
	printf("���ڶ�ȡmain�ĺ�����\n"); 
	f(); //ͨ����ַ���Կ���������ú��� 
}
