#define TEXT_Q_
#include"head.h"
int main()
{
	Queue movies;//��Ӱ����
	puts("��ӭ������Ӱ��¼����");
	puts("��ʼ���б����");
    InitializeQueue(&movies);
	GetMovies(&movies);
	putchar('\n'); 
	run(&movies);
    puts("�Ƿ񱣴浱ǰ�б�(Y���� Nȡ��)");
	if(getchar()=='y'||getchar()=='Y')
	   FileMovies(&movies);
	puts("�ݰ�~");
	 return 0;
}
	    
