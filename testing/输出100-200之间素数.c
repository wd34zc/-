#include<stdio.h>
int main()
{
	int num,i,max,m;
	num = 100;
	while (num<111)
	{
		i=2;
		max = num/2;
		printf("max=%d\n",max);
		while(i<max)
		{
			m=0;
			if(num%i==0) 
			     m++;
			i++;
			if(m!=0)
			  break;
		}
		num++;
		if(m==0)
		     printf("%d\n",num);
	}
	return 0;
 } 
