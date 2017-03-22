#include"PublicHead.h"
int amount;
typedef struct STUDENT{
	char name[10];
	int age;
	char grade;
}Student;
typedef struct NODE{
	Student * student;
	struct NODE * next;
}Queue;

//队列函数 
Queue * Initialize(Queue *);
Queue * InsertNode(Queue *);
Queue * DeleteNode(Queue *);
bool NodeIsEmpty(Queue *);
bool EmptyTheQueue(Queue *);
void ShowQueue(Queue *);
//文件读取专用函数 
bool IfSave(Queue *); 

