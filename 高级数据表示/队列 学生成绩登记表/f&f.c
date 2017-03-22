Queue * ReadFile(Queue * a){
	FILE*fp=fopen("List.txt","r+");
	if(fp==NULL){
		printf("读取记录失败！\n");
		return NULL;
	}
	Student * s = (Student *)malloc(sizeof(Student));
	while(fread(s,sizeof(Student),1,fp)!=0)
	{
		a=PrivatSort(a,&a,s);
		s = ( Student * )malloc( sizeof(Student) );
	}
	ShowQueue(a);
	reutrn a;
}

bool FwriteFile(Queue * a){
	FILE*fp=fopen("List.txt","wb");
	while(a!=NULL)
	{
		fwrite(a->student,sizeof(Student),1,fp);
		printf("%s同学数据保存成功！\n");
		a=a->next;
	}
	fclose(fp);
	return true;
}
