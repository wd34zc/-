//伸缩型 数组成员 


#include<stdio.h>
#include<stdlib.h>

//建立一个结构体 
struct grade 
{
	int cla;
	int num;
	double scores[];
} ;
 
 int main()
 {
    struct grade * pg;
    int n; //代表pg->cla 
    int m; //代表pg->num   因为还没有为结构体分配空间，结构体无法存储内容 
	
	
	//获取班级数量 
    printf("how many classes in your grade? ");
    scanf("%d",&n);
    printf("OK.get it!\n");
    double ave[n];
    
	//获取班级人数
    for(int i=0;i< n ;i++)
        {
 	       printf("Now,please tell me how many students in class(%d) ",i+1);
 	       scanf("%d",&m);
		   pg =(struct grade*)malloc(sizeof(struct grade) + m*sizeof(double));//为结构和数组分配合理内存 
		   pg->cla = n ;
		   pg->num = m;
           //获取成绩
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
