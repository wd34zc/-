#include<stdio.h>
//冒泡排序
void BubbleSort(int a[],int n);//从第一个数冒出一个泡，凡是遇到比他大的就交换，到最后时最大 
//选择排序
void SelectSort(int a[],int n);//依次检测出最小值，与第一个数互换 
//插入排序
void InsertSort(int a[],int n);//从第二个数开始，不断地把左边比这个数大的数往右挪 
//快速排序
void QuickSort(int a[],int left,int right);//分而治之，不断把一个基准数插入一个左边都比它小右边都比它大的位置。 

void BubbleSort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

void SelectSort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[k]>a[j])
				k=j;
		if(k!=i)
		{
			t=a[k];
			a[k]=a[i];
			a[i]=t;
		}
	}
}

void InsertSort(int a[],int n)
{
	int i,j,target;
	for(i=0;i<n;i++)
	{
		j=i;
		target=a[i];
		while(j>0 && target<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=target;
	}
}

void QuickSort(int a[],int left,int right)
{
	int key=a[left];//基准数 
	int i=left;
	int j=right;
	if(i<j)
	{
		while(i<j)
		{
//			printf("key=%d\n",key);
//			printf("i=%d\n",i);
//			printf("j=%d\n",j);
			while(i<j && a[j]>key)//把比基准数小的移到左边 
				j--;
//			printf("j=%d\n",j);
			if(i<j)
				a[i]=a[j];
			while(i<j && a[i]<key)//把左边比基准数大的第一个数移到j的位置，且j的右边都比基准数大 
				i++;
			if(i<j)
				a[j]=a[i];
//			printf("i=%d\n",i);
			a[i]=key;
		}  //在i和j的范围下继续向中间扫描，确保key成为分水岭 
		QuickSort(a,left,i-1); //给key左边部分排序 
		QuickSort(a,i+1,right);//给key右边部分排序 
	}
}

int main()
{
	int a[7]={5,1,7,2,6,4,3};
//	BublleSort(a,7);
//	SelectSort(a,7);
//	InsertSort(a,7);
	QuickSort(a,0,6);
	for(int i=0;i<7;i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0; 
}
