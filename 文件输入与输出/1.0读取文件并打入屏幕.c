/* 
�ú�����һ���ļ�����������Ļ ��
������getc  fopen
������r,w,a,r+,a+,w+ 
*/

#include<stdio.h>
int main()
{
	int ch;
	FILE * fp;//����һ��ָ���ļ���ָ�� 
	fp = fopen("try.txt","r");//��r���ʹ��ļ�try.txt 
	ch = getc(fp);//��ȡc�ļ���һ���ַ��������͵�ch 
	while (ch != EOF)
	{
		putchar(ch);
		ch = getc(fp);
	}
	return 0;
}

/*
ps�� 
  r  ֻ�� 
  w  ��ղ�д�� 
  a  ���ļ�����ĩβֱ��д�� 
*/
