#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,i;
    printf ("\n Enter starting number:");
    scanf ("%d",&m);
    printf("\n Enter ending numbder:");
    scanf("%d",&n);

    if (m>n)

        printf("Error");

    else

            printf ("Even numbers from %d to %d are:",m,n);

           for(i=m; i<=n; i++)
           {
            if (i%2==0)
                {
                         printf("%d\t",i);
                }
           }
    return 0;
}
