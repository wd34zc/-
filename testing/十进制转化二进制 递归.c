/*
 十进制转换二进制 
*/ 
#include<stdio.h>
#define N 2
int transform2(int n)
{
	int j;
	j=n%N;
	if(n/2)
	{
		j=j+transform(n/2);
	}
	return j*10;
 } 
 
int transform(int n)
{
	
}
 
 int main()
 {
 	int n=13;
 	int n2;
 	n2=transform(n);
 	printf("%d",n2);
 	return 0;
 }
