#include<stdio.h>

int main()
{
	void * a;
	
	int i = 5;
	a = &i;
	printf("%d\n",*(int *)a);
	
	char ch='a';
	a=&ch;
	printf("%c\n",*(char *)a);
	
	char str[]="you are a stupid man.";
	a=str;
	printf("%s\n",a);
 } 
