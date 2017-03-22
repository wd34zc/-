//fprintf，fscanf函数的运用 
//fprinf：把字符串输出到文件 
//fscanf：把文件输入到事先申明过的数组中 

#include<stdio.h>
void look(FILE *,int ch); 
int main()


{
	int ch;
	FILE * fp;
	
	//建立一个try.txt文件，并写入字符串。 
	fp=fopen("try.txt","w+");
	char pig[] = {"yan yan be a pig!"};
	fprintf(fp,"%s",pig);
	putchar('\n');
	
	look(fp,ch);
	
	//把文件内容输入到字符串words中 。 
	char words[10];
	while((fscanf(fp,"%s",words))==1)
	    puts(words); 
	
	look(fp,ch);//查看try.txt文件当前内容 
	
	ch=fclose(fp);
	if(ch=NULL)
	    printf("error closing FILE1 !") ;
	
    return 0;
 } 
 
void look(FILE * fp,int ch)
 {
 	//查看try.txt文件当前内容 
	rewind(fp);
    while( (ch=getc(fp)) != EOF )
        putchar(ch);
    putchar('\n');
    rewind(fp);
 }
