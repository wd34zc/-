#include<stdio.h>
void strcpy(char *,char *);
int main()
{
	char a[]="abcde";
	char b[10];
	strcpy(b,a);
	printf("%s",b);
	return 0;
 } 
 void strcpy(char *a,char *b)
 {
 	while((*a++=*b++)!=0);
 }
