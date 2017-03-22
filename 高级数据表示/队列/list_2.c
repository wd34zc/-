#include"head.h"

char GetChose(char get)
{
	puts("电影列表：");
	puts("1:添加电影");
	puts("2:删除电影");
	puts("3.清空电影列表");
	puts("4：展示电影列表");
	puts("请选择需要操作选项。");
	puts("直接回车退出\n");
	get=getchar();
	fflush(stdin);
	return get;
}

void run(Queue * movies)//运行主程序 
{
	char get;//获取用户选项；
	while((get=GetChose(get))!='\n')
	{
	  switch (get)
		{
			case '1':
	  	      AddMovies(movies);			   
	  	      break;
		    case '2':
	          if(!DelMovies(movies))
		        puts("电影删除失败！");
    	          break;
	    	case '3':
	          if(EmptyMovies(movies))
		        puts("清空成功！");
    		  else
	    	    puts("电影清空失败！");	      
	          break;
    		case '4':
	          ShowMovies(movies);
	          break;
		    default:
	          puts("请输入操作对应序号。");	
		}
		putchar('\n');
	 } 
 } 

void AddMovies(Queue * fq)//增加电影
{
	char movie[MAX];
    puts("请输入你想添加电影的名字：");
	gets(movie);
	while (movie[0]!='\n' && movie[0]!=0)
	{
	    fputs("电影 ",stdout);
		fputs(movie,stdout)	;
		if(EnQueue(fq,movie))
		  puts(" 添加成功！\n");
		else
		  puts(" 添加失败！\n");
		puts("请输入下一部电影的名字：");
	    gets(movie);
	}
 } 
 
bool DelMovies(Queue * fq)//删除电影
{
	char movie[MAX];
	puts("请输入你想删除电影名字：\n");
	gets(movie);
	return DelQueue(fq,movie);
}

bool EmptyMovies(Queue * fq)//清空列表
{
	puts("正在清空列表...");
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
	printf("共有%d部电影\n",fq->count);
	if (i==1)
	  puts("电影列表为空"); 
} 

 void FileMovies(Queue * fq)//把电影列表输出到文件
{
   FILE * fp;
   int i=1;
   if((fp=fopen("movie.txt","w"))==0)
     {
	   puts("保存失败！"); 
       exit(1);	
	 }
   Node * fn=fq->front;
   fputs("电影列表：\n",fp);
   while(fn)
   {
   	fprintf(fp,"%d：%s\n",i++,fn->item);
   	fn=fn->next;
   }
   fclose(fp);
   puts("保存成功！"); 
}

void GetMovies(Queue * fq)//获取文件中电影列表 
{
   puts("正在读取记录...");
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
	puts("记录读取成功。"); 
}

