#include"head.h"

void InitializeQueue (Queue * fq)
{
	fq->front=fq->last = 0;
	fq->count=0;
 } 
 
 bool QueueIsEmpty(Queue * fq)//队列是否为空
 {
 	if (fq->count==0)
 	{
	  return true;
	  fq->count=0;
	}
 	else 
 	return false;
 }
 
 bool QueueIsFull(Queue * fq)//队列是否为满
 {
 	if(fq->count<=MAXQUEUE)
 	  return false;
 	return true;
 }
 
 int QueueItemCount(Queue * fq)//队列节点数
 {
 	int count;
	 count=fq->count;
	 return count; 
 }
 
 bool EnQueue(Queue * fq,char fc[])//添加节点
 {
 	Node * fp;
 	if((fp=(Node *)malloc(sizeof(Node)))==0)
 	  return false;
 	strcpy(fp->item,fc);
// 	puts("text3ing");
 	if(QueueIsEmpty(fq))
 	  fq->front=fp;
 	else
 	  fq->last->next=fp;
// 	puts("text4ing");
 	fq->last=fp;
 	fp->next = 0;
 	fq->count++;
 	return true; 	
 }
 
 bool DelHeadQueue(Queue * fq)//删除节点 
 {
 	Node * fn1;
	 if((fn1=fq->front)!=0)
 	{
 		fq->front=fn1->next;
 		free(fn1);
 		fq->count--;
 		return true;
	 }
	 return false;	 
 }
 
 bool DelQueue(Queue * fq,char item[])//删除除第一个外任一节点
 {
 	Node * fnow,* ffront;
 	int i=0;
 	ffront=fnow=fq->front;
 	while(i++<fq->count && strcmp(fnow->item,item))
 	  {
 	  	   ffront=fnow;
		   fnow=fnow->next;
	  }
 	if(i==1)
		return DelHeadQueue(fq);
	if(i<=fq->count)
 	  {
 	  	ffront->next=fnow->next;
 	  	free(fnow);
 	  	fq->count--;
 	  	return true;
	  }
	else
	{
		puts("without this item");
		return false;	
	}
 }
 
 bool EmptyQueue(Queue * fq)
 {
 	while(!QueueIsEmpty(fq))
 	{
	    DelHeadQueue(fq);
	} 
    return true;
  } 
  
void ShowQueue(Queue * fq)//展示内容
{
	Node * fn=fq->front;
	int i=0;
	while(fn)
	  {
	    printf("Item %d:%s \n",i++,fn->item);
	    fn=fn->next;
	  }
    printf("\tItem Count:%d",fq->count);
 } 
 


