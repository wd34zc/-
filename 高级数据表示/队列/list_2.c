#include"head.h"

char GetChose(char get)
{
	puts("��Ӱ�б�");
	puts("1:��ӵ�Ӱ");
	puts("2:ɾ����Ӱ");
	puts("3.��յ�Ӱ�б�");
	puts("4��չʾ��Ӱ�б�");
	puts("��ѡ����Ҫ����ѡ�");
	puts("ֱ�ӻس��˳�\n");
	get=getchar();
	fflush(stdin);
	return get;
}

void run(Queue * movies)//���������� 
{
	char get;//��ȡ�û�ѡ�
	while((get=GetChose(get))!='\n')
	{
	  switch (get)
		{
			case '1':
	  	      AddMovies(movies);			   
	  	      break;
		    case '2':
	          if(!DelMovies(movies))
		        puts("��Ӱɾ��ʧ�ܣ�");
    	          break;
	    	case '3':
	          if(EmptyMovies(movies))
		        puts("��ճɹ���");
    		  else
	    	    puts("��Ӱ���ʧ�ܣ�");	      
	          break;
    		case '4':
	          ShowMovies(movies);
	          break;
		    default:
	          puts("�����������Ӧ��š�");	
		}
		putchar('\n');
	 } 
 } 

void AddMovies(Queue * fq)//���ӵ�Ӱ
{
	char movie[MAX];
    puts("������������ӵ�Ӱ�����֣�");
	gets(movie);
	while (movie[0]!='\n' && movie[0]!=0)
	{
	    fputs("��Ӱ ",stdout);
		fputs(movie,stdout)	;
		if(EnQueue(fq,movie))
		  puts(" ��ӳɹ���\n");
		else
		  puts(" ���ʧ�ܣ�\n");
		puts("��������һ����Ӱ�����֣�");
	    gets(movie);
	}
 } 
 
bool DelMovies(Queue * fq)//ɾ����Ӱ
{
	char movie[MAX];
	puts("����������ɾ����Ӱ���֣�\n");
	gets(movie);
	return DelQueue(fq,movie);
}

bool EmptyMovies(Queue * fq)//����б�
{
	puts("��������б�...");
	return EmptyQueue(fq);
}

void ShowMovies(Queue * fq)
{
	int i=1;
	Node * fn=fq->front; 
	while(fn)
	{
	  printf("%d: %s\n",i,fn->item);
	  fn=fn->next;
	  i++;
	}
	printf("����%d����Ӱ\n",fq->count);
	if (i==1)
	  puts("��Ӱ�б�Ϊ��"); 
} 

 void FileMovies(Queue * fq)//�ѵ�Ӱ�б�������ļ�
{
   FILE * fp;
   int i=1;
   if((fp=fopen("movie.txt","w"))==0)
     {
	   puts("����ʧ�ܣ�"); 
       exit(1);	
	 }
   Node * fn=fq->front;
   fputs("��Ӱ�б�\n",fp);
   while(fn)
   {
   	fprintf(fp,"%d��%s\n",i++,fn->item);
   	fn=fn->next;
   }
   fclose(fp);
   puts("����ɹ���"); 
}

void GetMovies(Queue * fq)//��ȡ�ļ��е�Ӱ�б� 
{
   puts("���ڶ�ȡ��¼...");
   FILE * fp;
   char a;
   char movie[MAX];
   int i;
   fp=fopen("movie.txt","r+");
   while((a=getc(fp))!=EOF)
	  if(a==':')
	  {
        fgets(movie,MAX,fp);
		for(i=0;i<MAX;i++)
		  if(movie[i]=='\n')
		    movie[i]=0;
	  	EnQueue(fq,movie);
	  }
	fclose(fp);
	ShowMovies(fq);
	puts("��¼��ȡ�ɹ���"); 
}

