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

//���к��� 
Queue * Initialize(Queue *);
Queue * InsertNode(Queue *);
Queue * DeleteNode(Queue *);
bool NodeIsEmpty(Queue *);
bool EmptyTheQueue(Queue *);
void ShowQueue(Queue *);
//�ļ���ȡר�ú��� 
bool IfSave(Queue *); 

