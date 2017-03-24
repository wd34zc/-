//枚举enum 

#include<stdio.h >

enum WEEK
{
	Mon,Tus,Wed,Thu,Fri,Sat,Sun
};

int main()
{
	enum WEEK day = Wed;
	printf("%d",day);//结果为2 
//	enum WEEK day = 3;//..........................error
    /*虽然本质上上面对应的分别是0,1,2,3,4,5,6 ，
	但是你必须输入上诉内容才有效，起到限制范围
	的作用。 */ 
	return 0;
}
