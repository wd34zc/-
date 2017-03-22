#include<stdio.h>
 int main()
 {
 	char * a = "abc";
 	char * b = "abc";
 	char c[] = "abc";
 	
// 	a[0]='d';
 	c[0]='d';
 	
 	printf("%p\n",a);
 	printf("%p\n",b);
 	printf("%p\n",c);
 	return 0;
 }
