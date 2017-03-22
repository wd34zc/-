#include"head.h"
void text();
void text()
{
	Queue book;
	bool p;
	int count;
	Queue * fb=&book;
	
	InitializeQueue(fb);
	    printf("item counts:%d\n",fb->count);
	
	p=QueueIsEmpty(fb);
	printf("%d\n",p);
	    printf("item counts:%d\n",fb->count);
	    
	p=QueueIsFull(fb);
	printf("%d\n",p);
	    printf("item counts:%d\n",fb->count);
	    
	count=QueueItemCount(fb);
	printf("%d\n",count);
	    printf("item counts:%d\n",fb->count);
	    
	char item[20]="i love you";
	p=EnQueue(fb,item);
	printf("%d\n",p);
	    printf("item counts:%d\n",fb->count);
	    
	if(p=DelHeadQueue(fb))
	  puts("OK!");
	 else
	   puts("queue is empty!");	
	   
	if(p=DelQueue(fb,item))
	  puts("OK!");
	 else
	   puts("queue is empty!");	
	   
   ShowQueue(fb);
}
