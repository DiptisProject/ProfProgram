#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[] = "inputprg6.txt";
    char outputFileName[] = "outputprg6.txt";
    char word[100];

    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    while (fscanf(inputFile, "%s", word) != EOF)
    {
        word[0] = toupper(word[0]);
        fprintf(outputFile, "%s ", word);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("File processed successfully. Check %s for the result.\n", outputFileName);

    return 0;
}

