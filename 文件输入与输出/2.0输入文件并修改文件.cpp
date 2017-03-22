/*
函数 ：getc  把文件内容读入缓冲区 
       putc  把内容写入文件 
*/ 

#include<stdio.h>
#include<stdlib.h>
void fw(void);
int main()
{
	int ch;
	FILE * ph;
	ph=fopen("try.txt","a+");
	
	//读取文件 
	while ((ch = getc(ph)) != EOF)
	{
		putchar(ch);
	}
	//putchar('\n');
	
	//向文件添加内容 
	char text[20]={"but you don't."};
	for (int i=0; i<20 && text[i] != '\0'; putc(ch,ph),i++)
		ch=text[i];
	
	rewind (ph);
	
	//再次读取文件 
	while ((ch = getc(ph)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	
	//关闭文件 
	if((ch=fclose(ph))==EOF)
	{
		puts("error!");
	}
	
	
	fw();
	
    return 0;
}

//文件复位 
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
