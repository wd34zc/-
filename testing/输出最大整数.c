#include<stdio.h>
#define TIMES 10 //�Ƚϵĸ��� 
int main()
{
	int a,b,c,i;
	i=1;
	printf("������%d�����֣�ÿ�������ûس����:\n",TIMES);
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
