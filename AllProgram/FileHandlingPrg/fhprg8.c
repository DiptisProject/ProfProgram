#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the source code file for reading
    file = fopen(__FILE__, "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and print the source code
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
