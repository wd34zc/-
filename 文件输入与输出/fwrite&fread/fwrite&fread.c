#include<stdio.h>
//#include<stdlib.h>
typedef struct STUDENT{
	char name[10];
	int age;
	char grade;
}Student;
void Write(Student * a,FILE * fp);
void Read(Student * a,FILE * fp);
void show(const Student * a);

int main()
{
	Student aa = {"joe",18,'A'};
	Student bb = {"chunxu",19,'A'}; 
	Student temp;
	
	FILE * fp;
	fp = fopen("list.txt","wb+");
	//show(&aa);
	Write(&aa,fp);
	Write(&bb,fp);
	fclose(fp);
	
	fp=fopen("list.txt","r+"); 
	fread(&temp,sizeof(Student),1,fp);
	show(&temp);
	fclose(fp);
	return 0;
}

void Write(Student * a,FILE * fp)
{
	fwrite(a,sizeof(Student),1,fp);
}

void Read(Student * a,FILE * fp)
{
	fread(a,sizeof(Student),1,fp);
}

void show(const Student * a)
{
	printf("%s %d %c\n",a->name,a->age,a->grade);
}

