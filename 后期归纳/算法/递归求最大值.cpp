#include<stdio.h>
int max(int *a , int n);
int main()
{
	int a[]={5,4,3,2};
	int i;
	i=max(a,4);
	printf("%d",i);
	return 0;
 } 
 int max(int *a,int n)
 {
 	if(n==1)
 		return *a;
 	int temp = max(a,n-1);
 	return (temp<a[n-1])?a[n-1]:temp;
 }
