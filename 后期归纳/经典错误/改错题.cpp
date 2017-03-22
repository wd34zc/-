说明：以下代码是把一个字符串倒序，如“abcd”倒序后变为“dcba” 
#include"string.h" 　　
main() 　　
{ 　　
char*src="hello,world"; 　　
char* dest=NULL; 　　
int len=strlen(src); 　　
dest=(char*)malloc(len); 　　   
char* d=dest; 　　
char* s=src[len]; 　         
while(len--!=0) 　　
d++=s--; 　　       
printf("%s",dest); 　　
return 0; 　　
} 　　

 　　
//方法1：一共有4个错误; 　　
int main() 　　
{ 　　
　char* src = "hello,world"; 　　
　int len = strlen(src); 　　
　char* dest = (char*)malloc(len+1);//要为分配一个空间 　　　char* d = dest; 　　
　char* s = &src[len-1];          //指向最后一个字符　　
　while( len-- != 0 ) 　　
　 *d++=*s--; 　　
　*d = 0;           //尾部要加’\0’ 　　
　printf("%sn",dest); 　　　
free(dest);        // 使用完，应当释放空间，以免造成内存汇泄露
dest = NULL;　　 //防止产生野指针　
return 0; 　
　}
