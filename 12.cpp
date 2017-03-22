#include<stdio.h>
int joe (int * a,int * b);
int main()
{
	int x,y;
	x=5;
	y=10;
	printf("x=%d,y=%d\n",x,y);
	printf("adress:x=%p,y=%p\n",x,y);
	joe(&x,&y);//获取x,y的地址 
	printf("x=%d,y=%d\n",x,y);
	printf("adress:x=%p,y=%p\n",x,y);
	return 0;
 } 
 
 int joe(int * a,int * b)
 {
 	int c,d,e;
 	c=*a;
 	*a=*b;
 	*b=c;
 	d=*a;
 	e=*b;
    printf("a\tb\tc\td\te\n");
    printf("%d\t%d\t%d\t%d\t%d\n",a,b,c,d,e);
 }
