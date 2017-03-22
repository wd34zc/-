//#ifndef QUEUE_H_
//#define QUEUE_H_
#define MAXQUEUE 20
#define MAX 20
typedef struct node
{
	char item[MAX];
	struct node * next;
} Node;

typedef struct queue
{
	Node *front;
	Node *last;
	int count;
} Queue;

void InitializeQueue(Queue *);//初始化 队列
bool QueueIsEmpty(Queue *);//队列是否为空
bool QueueIsFull(Queue *);//队列是否为满
int QueueItemCount(Queue *);//队列节点数
bool EnQueue(Queue *,char []);//添加节点
bool DelHeadQueue(Queue *);//删除第一个节点 
bool DelQueue(Queue *,char []);//删除除第一个外任一节点
bool EmptyQueue(Queue *);//清空队列 
void ShowQueue(Queue *);//展示内容 
void text();//用于测试 
//#endif
