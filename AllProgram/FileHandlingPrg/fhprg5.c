#include <stdio.h>
//#include <stdlib.h>

int main() {
    FILE *f1, *f2, *ftmp;
    char ch, file1prg5[20], file2prg5[20], file3prg5[20];

    printf("\nEnter name of first file:");
    gets(file1prg5);
    printf("\nEnter name of second file:");
    gets(file2prg5);
    printf("\nEnter name of merged file:");
    gets(file3prg5);

    f1 = fopen("file1prg5.txt","r");
    f2 = fopen("file2prg5.txt","r");
    ftmp = fopen("file3prg5.txt","w");

    if (ftmp == NULL || f1 == NULL || f2 == NULL)
    {
        perror("Error opening file");
        exit(1);
    }

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, ftmp);

    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, ftmp);

    printf("Two files merged into %s successfully\n", file3prg5);

    fclose(f1);
    fclose(f2);
    fclose(ftmp);

    return 0;
}
