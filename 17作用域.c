//������Ľ��⣺ 
// ����������򡢺���ԭ���������ļ������� 
#include<stdio.h>
int a=1;//�ļ�������
      //�������ļ������õ�a����������������
int joe(int*b);//����ԭ��������
              //ֻ�������������Ч������ֱ��д�ɣ�
			  //    int joe(int *)
int main()
{
	int c=3;//����������� ֻ�ڻ�����������������Ч�� 
	int d;
	d=joe(&c);
	printf("a=%d\n",a);
	//printf("b=%d",b);//error�� bֻ��joe������Ч���˴��ѳ����������� 
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	return 0; 
 } 

int joe(int*b)
{
	printf("b=%p\n",b);
	return *b;
}
