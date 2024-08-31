#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch;

    // Prompt the user for input and output file names
    printf("Enter the input file name: ");
    scanf("%s", inputFileName);
    printf("Enter the output file name: ");
    scanf("%s", outputFileName);

    // Open the input file for reading
    inputFile = fopen("inputfileprg9.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("outputfileprg9.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Read characters from the input file and write non-space characters to the output file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (!isspace(ch)) {
            fputc(ch, outputFile);
        }
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Spaces removed and content saved to %s.\n", outputFileName);

    return 0;
}

