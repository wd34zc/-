//ö��enum 

#include<stdio.h >

enum WEEK
{
	Mon,Tus,Wed,Thu,Fri,Sat,Sun
};

int main()
{
	enum WEEK day = Wed;
	printf("%d",day);//���Ϊ2 
//	enum WEEK day = 3;//..........................error
    /*��Ȼ�����������Ӧ�ķֱ���0,1,2,3,4,5,6 ��
	��������������������ݲ���Ч�������Ʒ�Χ
	�����á� */ 
	return 0;
}
