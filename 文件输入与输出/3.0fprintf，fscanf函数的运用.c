//fprintf��fscanf���������� 
//fprinf�����ַ���������ļ� 
//fscanf�����ļ����뵽������������������ 

#include<stdio.h>
void look(FILE *,int ch); 
int main()


{
	int ch;
	FILE * fp;
	
	//����һ��try.txt�ļ�����д���ַ����� 
	fp=fopen("try.txt","w+");
	char pig[] = {"yan yan be a pig!"};
	fprintf(fp,"%s",pig);
	putchar('\n');
	
	look(fp,ch);
	
	//���ļ��������뵽�ַ���words�� �� 
	char words[10];
	while((fscanf(fp,"%s",words))==1)
	    puts(words); 
	
	look(fp,ch);//�鿴try.txt�ļ���ǰ���� 
	
	ch=fclose(fp);
	if(ch=NULL)
	    printf("error closing FILE1 !") ;
	
    return 0;
 } 
 
void look(FILE * fp,int ch)
 {
 	//�鿴try.txt�ļ���ǰ���� 
	rewind(fp);
    while( (ch=getc(fp)) != EOF )
        putchar(ch);
    putchar('\n');
    rewind(fp);
 }
