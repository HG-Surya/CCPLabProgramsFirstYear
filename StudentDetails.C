#include<stdio.h>
#include<conio.h>
int main()

{

    struct student

    {
       int roll_no;
       char name[100];
       char sec;
       char dept;
       int fees;
       int marks;

    };
    struct student stud[50];
    int i,large=0,n;
    printf("Enter the number of student \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

     printf("Enter student %d details \n",i+1);
     printf("Enter roll_no \n");

     scanf("%d",&stud[i].roll_no);
     printf("Enter name of the student \n");
     scanf("%s",&stud[i].name);
     printf("Enter the section of the student \n");
     scanf("%s",&stud[i].sec);
     printf("Enter the department of student \n");
     scanf("%s",&stud[i].dept);
     printf("Enter the fees of student \n");
     scanf("%d",&stud[i].fees);
     printf("Enter the marks of the student \n");
     scanf("%d",&stud[i].marks);
     }
     for(i=0;i<n;i++)
     {
       printf("Student %d details :\n",i+1);
       printf("roll_no=%d\n",stud[i].roll_no);
       printf("name =%s\n",stud[i].name);
       printf("sec =%s\n",stud[i].sec);
       printf("dept =%s\n",stud[i].dept);
       printf("fees =%d\n",stud[i].fees);
       printf("marks =%d\n",stud[i].marks);
    }

     for(i=0;i<n;i++)

     {
        if(stud[i].marks>large)
        {

         large=stud[i].marks;
         n=i+1;
         }

       }
       printf("The highest marks of %d is obtained by %d\n",large,n);
       getch();
       return 0;

     }













