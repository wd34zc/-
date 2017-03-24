#include<stdio.h>
int main()
{
	const double joe=3852.99;
	
	printf("*%f*\n",joe);
	printf("*%e*\n",joe);
	printf("*%4.2f*\n",joe);
	printf("*%2.0f*\n",joe);
	printf("*%10.3f*\n",joe);
	printf("*%010.3e*\n",joe);
	printf("*%+06.2f*\n",joe);
	printf("*%010.2f*\n",joe);
	return 0;
 } 
