/*
���� ��getc  ���ļ����ݶ��뻺���� 
       putc  ������д���ļ� 
*/ 

#include<stdio.h>
#include<stdlib.h>
void fw(void);
int main()
{
	int ch;
	FILE * ph;
	ph=fopen("try.txt","a+");
	
	//��ȡ�ļ� 
	while ((ch = getc(ph)) != EOF)
	{
		putchar(ch);
	}
	//putchar('\n');
	
	//���ļ�������� 
	char text[20]={"but you don't."};
	for (int i=0; i<20 && text[i] != '\0'; putc(ch,ph),i++)
		ch=text[i];
	
	rewind (ph);
	
	//�ٴζ�ȡ�ļ� 
	while ((ch = getc(ph)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	
	//�ر��ļ� 
	if((ch=fclose(ph))==EOF)
	{
		puts("error!");
	}
	
	
	fw();
	
    return 0;
}

//�ļ���λ 
void fw(void)
{
	int ch;
	FILE * ph;
	ph = fopen("try.txt","w+");
	char a[]={"i am a handsome boy!"};
	for(int i=0; i<30 && a[i] != EOF; putc(ch,ph),i++)
        ch=a[i];
    fclose(ph); 
}
