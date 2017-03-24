#include<stdio.h>
void joe(void);
int main(void)
{
	printf("I ");
	joe();
    printf("You!");
    return 0;
}

void joe(void)
{
	printf("Love ");
}
