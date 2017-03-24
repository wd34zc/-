#include<stdio.h>
void joe (double a,int b);
void pig();
int main()
{
	printf("欢迎进入指数世界。\n");
	printf("请输入底数与指数：");
	pig ();
	return 0;
}

double joe(double a,int b)
{
	printf("\ntest a=%f b=%f",a,b);
	int i;
	double z=1.00;
	for (i=1;i<=b;i++)
	z*=a;
	printf("\ntest %f",z);
}

void pig()
{
	double c,result;
	int d; 
	while (scanf("%lf%d",&c,&d) == 2)
	{
		printf("\ntest c=%f d=%d",c,d);
		joe(c,d);
	    printf("\a\n结果：%.2f\n\n",result);
	    printf("请输入底数与指数：");
	}
}
