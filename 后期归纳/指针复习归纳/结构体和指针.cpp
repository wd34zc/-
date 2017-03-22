/*
 结构体 和 指针 
*/

#include<stdio.h>
struct Student{
	char name[20];
	char age;
	char grade;
};
typedef struct Student Strstudent;
void show(Strstudent *);
int main()
{
	Strstudent aa = {"帅哥",18,'A'};
	Strstudent * paa;
	paa = &aa;
	show(&aa);
	return 0;
}

void show(Strstudent * a)
{
	printf("%s %d %c",a->name,a->age,a->grade);
}
