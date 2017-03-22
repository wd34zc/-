#include<stdio.h>
int main()
{
	char a[20] = "Hello";
	char b[20] = "World!";
	char c[20];
	sprintf(c,"%s %s",a,b);
	puts(c);
	return 0;
 } 
