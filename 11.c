/*ͳ��������
ԭ��ͨ������������֮��Ŀո��ƶϳ�������
      ʵ�ʾ��Ǽ��ո��������
����������һ�����������������ķ������ַ����ǿո�
      ������һ�������������ո�ǰ�Ƿ����ַ�
	  ����ѭ��
����*/
#include<stdio.h>
#include<ctype.h>
#define stop '|'
int main()
{
	char a;//���ڼ���ַ�
	int b=0;//��������
	int c=0;//�������� 
	while ((a=getchar())!=stop)
	{
		if(!isspace(a))
		b=1;
		
		if(isspace(a) && b==1)
		{
			b=0;
			c++; 
		}
	 }
	 printf("%d",c);
	 return 0;
}  
