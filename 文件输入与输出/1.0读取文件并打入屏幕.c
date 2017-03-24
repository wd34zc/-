/* 
用函数打开一个文件，并打入屏幕 。
函数：getc  fopen
参数：r,w,a,r+,a+,w+ 
*/

#include<stdio.h>
int main()
{
	int ch;
	FILE * fp;//建立一个指向文件的指针 
	fp = fopen("try.txt","r");//以r类型打开文件try.txt 
	ch = getc(fp);//获取c文件第一个字符，并发送到ch 
	while (ch != EOF)
	{
		putchar(ch);
		ch = getc(fp);
	}
	return 0;
}

/*
ps： 
  r  只读 
  w  清空并写入 
  a  在文件内容末尾直接写入 
*/
