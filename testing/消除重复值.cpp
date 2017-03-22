#include<stdio.h>
main()
{
   char a[]="AAAAAABBBBBBBBBBCCCCCCCCCCDDDDDDDDD";
   int i,j,k,l;
   for(i=0;a[i+1]!='\0';i++)   
     if(a[i]!=' ')
       for(j=i+1;a[j]!='\0';j++)
       {       
         if(a[i]==a[j]) 
           a[j]=' ';
		      //printf("\n%s",a);        
       }
     else
       {
         l=1;
         while(a[i]==' ')
           a[i]=a[i+l++];
         printf("\n%s",a);
		 //printf("\ni=%d",i);
		 i--; 
       }
   for(i=1;a[i]!=' '&&a[i]!='\0';i++);
   a[i]='\0';
   printf("\n\n\n%s",a); 
}
