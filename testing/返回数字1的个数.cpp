#include<stdio.h>

int CountOne(int num)
{
	register int amount = 0;
	int i,j,k,temp;
	while(num!=0)
	{
		temp=num;
//		printf("%d:",temp); 
		while(temp!=0)
		{
			i=temp%10;
			if(i==1)
				amount++;
			temp/=10;
		}
//		printf("amount=%d\n",amount); 
		num--;
	}
	return amount;
}

int main()
{
	int i=100000;
	while(i>=0)
	{
		if(CountOne(i)==i)
			printf("%d ",i);
		i--; 
	}
	return 0;
}
