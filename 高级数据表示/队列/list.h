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

void InitializeQueue(Queue *);//��ʼ�� ����
bool QueueIsEmpty(Queue *);//�����Ƿ�Ϊ��
bool QueueIsFull(Queue *);//�����Ƿ�Ϊ��
int QueueItemCount(Queue *);//���нڵ���
bool EnQueue(Queue *,char []);//��ӽڵ�
bool DelHeadQueue(Queue *);//ɾ����һ���ڵ� 
bool DelQueue(Queue *,char []);//ɾ������һ������һ�ڵ�
bool EmptyQueue(Queue *);//��ն��� 
void ShowQueue(Queue *);//չʾ���� 
void text();//���ڲ��� 
//#endif
