#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,file_name[25];
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        perror("Error while opening the file\n");
        exit(1);
    }
    printf("The contents of file are:\n");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    getch();
}
