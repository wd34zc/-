#include<stdio.h>
#define TIMES 10 //比较的个数 
int main()
{
	int a,b,c,i;
	i=1;
	printf("请输入%d个数字，每个数字用回车间隔:\n",TIMES);
    scanf("%d",&a);
	while (i<TIMES)
    {
    	scanf("%d",&b);
    	i++;
    	if (a<b)
    	  a=b; 
	 } 
    printf("the max number is %d\n",a);

	return 0;
 } 
