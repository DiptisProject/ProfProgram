#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char line[1000];
    bool inComment = false;
    int totalLines = 0;
    int blankLines = 0;
    int commentLines = 0;

    // Prompt the user for the file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen("filenameprg7.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file line by line
    while (fgets(line, sizeof(line), file)) {
        totalLines++;

        // Remove leading and trailing whitespace
        char *trimmedLine = line;
        while (*trimmedLine == ' ' || *trimmedLine == '\t') {
            trimmedLine++;
        }

        // Check for blank lines
        if (trimmedLine[0] == '\n' || trimmedLine[0] == '\r' || trimmedLine[0] == '\0') {
            blankLines++;
        } else {
            // Check for comment lines
            if (inComment) {
                commentLines++;
                // Check for the end of a comment block
                if (strstr(trimmedLine, "*/")) {
                    inComment = false;
                }
            } else if (strstr(trimmedLine, "/*")) {
                commentLines++;
                inComment = true;
                // Check for the end of a comment block on the same line
                if (strstr(trimmedLine, "*/")) {
                    inComment = false;
                }
            } else if (strstr(trimmedLine, "//")) {
                commentLines++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Total lines: %d\n", totalLines);
    printf("Blank lines: %d\n", blankLines);
    printf("Comment lines: %d\n", commentLines);
    printf("Non-comment non-blank lines: %d\n", totalLines - (blankLines + commentLines));

    return 0;
}
