//������ �����Ա 


#include<stdio.h>
#include<stdlib.h>

//����һ���ṹ�� 
struct grade 
{
	int cla;
	int num;
	double scores[];
} ;
 
 int main()
 {
    struct grade * pg;
    int n; //����pg->cla 
    int m; //����pg->num   ��Ϊ��û��Ϊ�ṹ�����ռ䣬�ṹ���޷��洢���� 
	
	
	//��ȡ�༶���� 
    printf("how many classes in your grade? ");
    scanf("%d",&n);
    printf("OK.get it!\n");
    double ave[n];
    
	//��ȡ�༶����
    for(int i=0;i< n ;i++)
        {
 	       printf("Now,please tell me how many students in class(%d) ",i+1);
 	       scanf("%d",&m);
		   pg =(struct grade*)malloc(sizeof(struct grade) + m*sizeof(double));//Ϊ�ṹ�������������ڴ� 
		   pg->cla = n ;
		   pg->num = m;
           //��ȡ�ɼ�
     	   printf("Well,enter their scores please.\n");
 	       for(int j=0;j<pg->num;j++)
 	       {
 	         	scanf("%lf",&pg->scores[j]);
		   }
		   printf("OK.here are scores from class(%d)'s stdents:\n",i+1);
		   int k=0;
		   for(int j=0;j<pg->num;j++)
 	       {
 	         	printf("%.2lf  ",pg->scores[j]);
 	         	k += pg->scores[j];
		   }
		   putchar('\n');
		   ave[i] = (k/pg->num) ;
		   printf("And now, I will tell you that:");
		   putchar('\n');
		   printf("the everage is %.2lf\n",ave[i]);
		   free(pg);
        }
        
        
        
        return 0;
 }  
