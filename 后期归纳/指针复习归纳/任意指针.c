/*
����ָ�룺void * vp;
	����ָ�붼���Խ����κ�ָ��
	���ʱ��Ҫǿ��ת��Ϊ��Ӧ���������� 
*/

#include<stdio.h>
#include<stdlib.h> 
void IsNullPoint(void * p);
void showInt(void * vp);
void showFloat(void * vp);
void showString(void * vp);

int main()
{
	//ָ����ͨ���� 
	void (*show)(void *); //����һ��ָ�뺯�� 
	void * vp = NULL; //����һ������ָ��  
	
	IsNullPoint(vp);
	
	int i = 10;
	vp = &i;  	
	show = showInt;
	show(vp);
	
	float f = 20;
	vp = &f;
	show = showFloat;
	show(vp);
	
	char str[]="i am a stupid boy.";
	vp = str;
	show = showString;
	show(vp);
	
	IsNullPoint(vp);
	
	// ǿ��ָ�� ����
	void * ps(); //����һ������ָ�� 
	ps = (void*)showString;
	( (void (*)(void *)) ps)(vp); 
	//��ʵ������ʲôָ�붼������ɣ�������Ҫǿ��ת���� 
	 
	return 0;
 } 
 
void IsNullPoint(void * p) //�����ж����е�ָ���Ƿ�Ϊ�� 
 {
 	if(p == NULL)
 		printf("��ָ�룡\n");
 	else
 		printf("ָ���ڴ��ָ�롣\n");
  } 
  
  void showInt(void * vp)
  {
  	printf("%d\n",*(int *)vp);
  }
  
  void showFloat(void * vp)
  {
  	printf("%f\n",*(float *)vp);
  }
  
  void showString(void * vp)
  {
  	printf("%s\n",vp);
  }
