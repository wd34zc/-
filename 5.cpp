#include<stdio.h>
int main()
{
	float i=32000.0;
	double a=2.14e9;
	long double b;
	b=5.3e10;
	printf("%f = %.3e\n",i,i);
	printf("%f = %e\n",a,a);	   
	printf("%lf = %le\n",b,b);
	return 0;
}
