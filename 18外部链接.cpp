//�ⲿ���� 
#include<stdio.h>
int a=1;
void joe();
int main()
{
	printf("δ�ڴ����ڲ�����ʱ��%d\n",a);
	extern int a;
	printf("���ڴ����ڲ�����ʱ��%d\n",a);
	joe();
	printf("��joe���������a��Ϊ2��,main������ʾ��a=%d\n",a); 
	return 0;
}

void joe()
{
	//extern int a=2; //error 
	extern int a;
	a=2;
	printf("��joe���������a��Ϊ2��,joe������ʾ��a=%d\n",a);
}

/*
���������У� 
˵����
1.�������ڿ��Բ����ٴ�������
2.������������޸��ⲿ���ӵ�ֵ�� 
ps:
extern ������ǰ�����ж������˼��
����ⲿ����ʱ������ʹ�á��ڲ���
��ʹ�ÿ���ǿ�ɶ��ԣ�����ʹ�á� 
*/
