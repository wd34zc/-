#include<stdio.h>
//ð������
void BubbleSort(int a[],int n);//�ӵ�һ����ð��һ���ݣ���������������ľͽ����������ʱ��� 
//ѡ������
void SelectSort(int a[],int n);//���μ�����Сֵ�����һ�������� 
//��������
void InsertSort(int a[],int n);//�ӵڶ�������ʼ�����ϵذ���߱���������������Ų 
//��������
void QuickSort(int a[],int left,int right);//�ֶ���֮�����ϰ�һ����׼������һ����߶�����С�ұ߶��������λ�á� 

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
	int key=a[left];//��׼�� 
	int i=left;
	int j=right;
	if(i<j)
	{
		while(i<j)
		{
//			printf("key=%d\n",key);
//			printf("i=%d\n",i);
//			printf("j=%d\n",j);
			while(i<j && a[j]>key)//�ѱȻ�׼��С���Ƶ���� 
				j--;
//			printf("j=%d\n",j);
			if(i<j)
				a[i]=a[j];
			while(i<j && a[i]<key)//����߱Ȼ�׼����ĵ�һ�����Ƶ�j��λ�ã���j���ұ߶��Ȼ�׼���� 
				i++;
			if(i<j)
				a[j]=a[i];
//			printf("i=%d\n",i);
			a[i]=key;
		}  //��i��j�ķ�Χ�¼������м�ɨ�裬ȷ��key��Ϊ��ˮ�� 
		QuickSort(a,left,i-1); //��key��߲������� 
		QuickSort(a,i+1,right);//��key�ұ߲������� 
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
