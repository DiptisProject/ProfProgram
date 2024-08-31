#include <stdio.h>

int main() {
    // Open a file for writing (create the file if it doesn't exist)
    FILE *file = fopen("textprg4.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Write text to the file using fprintf()
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a test program.\n");
    fprintf(file, "Writing text to a file using fprintf() in C.\n");

    // Close the file
    fclose(file);

    printf("Text has been written to 'textprg4.txt'.\n");

    return 0;
}

