#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SIZE 100
void main()
{
   char name[SIZE];
   int marks,i,n;
   FILE *fptr;
   printf("Enter Number Of Students:");
   scanf("%d",&n);
   fptr=fopen("student.txt","w");
   if(fptr==NULL)
   {
       printf("Error to access the file");
       exit(1);
   }
   for(i=0;i<n;i++)
   {
       printf("\nRecord No.:%d",i+1);
       printf("\nEnter Name:");
       scanf("%s",name);
       printf("\nEnter Marks:");
       scanf("%d",&marks);
       fprintf(fptr,"\nName %s  \nMarks:%d\n",name,marks);
   }
   fclose(fptr);
   getch();
}
