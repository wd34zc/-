˵�������´����ǰ�һ���ַ��������硰abcd��������Ϊ��dcba�� 
#include"string.h" ����
main() ����
{ ����
char*src="hello,world"; ����
char* dest=NULL; ����
int len=strlen(src); ����
dest=(char*)malloc(len); ����   
char* d=dest; ����
char* s=src[len]; ��         
while(len--!=0) ����
d++=s--; ����       
printf("%s",dest); ����
return 0; ����
} ����

 ����
//����1��һ����4������; ����
int main() ����
{ ����
��char* src = "hello,world"; ����
��int len = strlen(src); ����
��char* dest = (char*)malloc(len+1);//ҪΪ����һ���ռ� ������char* d = dest; ����
��char* s = &src[len-1];          //ָ�����һ���ַ�����
��while( len-- != 0 ) ����
�� *d++=*s--; ����
��*d = 0;           //β��Ҫ�ӡ�\0�� ����
��printf("%sn",dest); ������
free(dest);        // ʹ���꣬Ӧ���ͷſռ䣬��������ڴ��й¶
dest = NULL;���� //��ֹ����Ұָ�롡
return 0; ��
��}
