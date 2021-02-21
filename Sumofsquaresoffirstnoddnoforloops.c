#include<stdio.h>
#include<conio.h>

int main()
   {
     int n,i,s=0;
     printf("\n Enter the ending number:");
     scanf ("%d",&n);

       for(i=1;i<=n; i=i+2)

           {
             s=s+(i*i);

           }
     printf ("sum of squares of numbers to %d is:%d",n,s);
     return 0;
   }
