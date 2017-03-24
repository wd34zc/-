/*
 指针和数组 
*/

#include<stdio.h>
void show(const int[][2]);
int main()
{
	int a[3]={1,2,3}; 
	int * pa;
	pa = a;

	int b[3][2]={{1,2},{4,5},{7,8}};
	int (*pb)[2];
	pb = b;
	
	show(b);//多为函数的传递 
	
	return 0;
}

void show(const int (*a)[2])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
			printf("%d ",a[i][j]);
		putchar('\n'); 
	}	
}
