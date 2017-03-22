#include<stdio.h>
#include<string.h>
#define JOE "what a big pig you are"
#define JOEE "What a big pig you are"
int main()
{
	char name[5];
	printf("Your name is _____\b\b\b\b\b");
	scanf("%s",name);
	printf("here is about you name:\n");
	printf("string:%d & bytes:%d\n",strlen (name) , sizeof name);
	printf("\n\nJOE is \"what a big pig you are\"\n");//无大写 
	printf("JOEE is \"What a big pig you are\"\n");//有大写 
	printf("The phrase of JOE has %d letters and occupies %d memory cells.\n"
	,strlen(JOE),sizeof (JOE));
	printf("The phrase of JOEE has %d letters and occupies %d memory cells."
	,strlen(JOEE),sizeof (JOEE));
	return 0;
 } 
