/*
 ����������ָ�룬�Ӻ��������ڴ����
 	����䣺
	 	����ͨ��ָ�봫��ֵ����Ϊ��
			���Ǹı���ָ����ָ�ĵ�ַ��Ӧ��ֵ��
			�����ǲ�û�иı�ָ���ֵ����ָ����ָ�ĵ�ַ���� 
	������ͣ�			  
 		��Ȼ���������岢������ָ�룬
		�����Ӻ��������ڴ�ʱ���ڻ�ȡ�ڴ��ı����Ӻ���ָ���ָ���ַ��
		��˸ÿռ��������ָ����Ч��
	�޸ķ�����
		 1.ͨ�����ݶ���ָ�������д��ݡ� 
		 2.ͨ������ ��ָ���ڴ��ָ�� �����ݡ� 
*/ 


#include<stdio.h>
#include<stdlib.h> 
typedef struct NODE{
	char * student;
	struct NODE * next;
}Queue;
void Initialize(Queue * a);
int main()
{
	char g; 
	Queue * ps;
	Initialize(ps);	
	
	//������ 
	if(ps->student == NULL) //ps��Ȼ��Ұָ�룬��˲��ܻ�ȡ���ַ��Ӧ���ݡ� 
		printf("��ʼ��ʧ�ܣ�\n"); 

	getchar();
	return 0;
}

void Initialize(Queue * a) {
	
	a=(Queue *)malloc(sizeof(Queue *)); // �Ӻ����ɹ���ȡ�ڴ�ռ� 
	
	if( a == NULL )
	{
		printf("�Ӻ�����ʼ��ʧ�ܣ�\n");
		return ;
	}
	else
		printf("�Ӻ�����ʼ���ɹ���\n");
	a->next = NULL;
	a->student = NULL;
	return ;
}
