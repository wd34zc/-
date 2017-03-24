//冒泡排序
#include<stdio.h>
int amount1=0;
int amount2=0;
void BubbleSort(int * a,int n)
{
	int i,j,t;
	for(i = 0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				amount1++;
			}
//		for(int i=0;i<9;i++)
//			printf("%d ",a[i]);
//		putchar('\n');
	}
}

void BubbleSort_2(int * a,int n) //选择排序的思想，但是稳定 
{
	int i,j,t,k;
	for(i = 0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[k]>a[j])
			{
				k=j;
			}
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
			amount2++;
		}
//		for(int i=0;i<9;i++)
//			printf("%d ",a[i]);
//		putchar('\n');
	}
}

int main()
{
	int a[9]={9,3,8,2,7,1,6,5,4};
	int b[9]={9,3,8,2,7,1,6,5,4};
	printf("amount1=%d\namount2=%d\n",amount1,amount2);
	BubbleSort(a,9);
	BubbleSort_2(b,9);
	printf("amount1=%d\namount2=%d\n",amount1,amount2);
//	for(int i=0;i<9;i++)
//		printf("%d ",a[i]);
	return 0;
}


