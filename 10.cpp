#include<stdio.h>
int main()
{
	int n = 1;
	int m;
	while (n<11)
	{
	m=11-n ;
	printf("现有%d人，距离组成一支足球队还差%d人。\n",n,m);
	n=n+1;
    }
    int t = 11;
    printf("现有%d人，已凑成一支足球队！",t);
    return 0;
 } 
