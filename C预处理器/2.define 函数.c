/*
 CԤ������ ֮ #define
 ������
 	�൱�ڼ򵥵Ĵ��� 
*/

#include<stdio.h>
#define SQUARE(x) x*x //���õ����� 
#define SQUARE2(X) ((X)*(X))
#define PSQR(X) printf("%d * %d = %d\n",X,X,((X)*(X))) //�����������ַ� 
#define PNAME(C) printf("%s is a good boy\n",C) //�����������ַ��� 
#define XNAME(n) x ## n //## ճ�ϼ�
#define PNAME2(n) printf("x"#n" = %d\n",x##n);  //"#n" ������˫�����������ַ������ݡ� 
#define PF(...) printf(__VA_ARGS__);
#define PN(...) printf("%d\n",__VA_ARGS__)
//һ��꺯��
#define MAX(x,y) ((x)<(y) ? (y):(x))
#define ABS(x) ((x)>0 ? (x):-(x))
//#define SWAP(x,y) x=x+;y=x-y;x=x-y;
int main()
{
	printf("%d\n",SQUARE(2)); //2*2 == 4 
	printf("%d\n",SQUARE(2+1)); //2+1*2+1 == 5 
	printf("%d\n",SQUARE(2*2)); //2*2*2*2 == 16 
	putchar('\n'); 
	
	printf("%d\n",SQUARE2(2)); //(2)*(2) == 4 
	printf("%d\n",SQUARE2(2+1)); //(2+1)*(2+1) == 5 
	printf("%d\n",SQUARE2(2*2)); //(2*2)*(2*2) == 16 	
	putchar('\n');
	
	PSQR(3);
	PSQR(3+2);
	PSQR('a'); //'a' == 97
	PNAME("joe");
	putchar('\n');
	
	int XNAME(1) = 14; //int x1 = 14;
	PNAME2(1);
	int XNAME(2) = 20;
	PNAME2(2); 
	putchar('\n');
	PF("I love you!\n");
	PF("What about you?\n");
	putchar('\n');
	
	PN(MAX(1,2));
	PN(ABS(-5));
//	SWAP(1,2);
	return 0;
}
