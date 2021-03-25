#include<stdio.h>
int main()
{
  int length;

  char str1[100],str2[100],i,str;
  printf("Enter the string:str1\n");
  gets(str1);
  for (i=0;str1[i]!='\0';i++)
  {
     str2[i]=str1[i];
  }
   length=i;
   str2[i]='\0';
   printf("String str2:%s\n",str2);
   while(str1[i]!='\0')
   {
       i++;
   }


   printf("Length of string is %d\n",i);
   getchar();
   return 0;
 }









