#include <stdio.h>

// Define a structure to represent a member
struct Member {
    char name[50];
    int age;
    float salary;
};

int main() {
    int n;

    // Prompt the user to enter the number of members
    printf("Enter the number of members: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Member members[n];

    // Input data for each member
    for (int i = 0; i < n; i++) {
        printf("Enter details for member %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", members[i].name);
        printf("Age: ");
        scanf("%d", &members[i].age);
        printf("Salary: ");
        scanf("%f", &members[i].salary);
    }

    // Open a file for writing
    FILE *file = fopen("arrayprg3.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the array of structures to the file using fprintf()
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", members[i].name, members[i].age, members[i].salary);
    }

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("arrayprg3.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and display the data from the file
    printf("\nMembers data read from file:\n");
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %d %f", members[i].name, &members[i].age, &members[i].salary);
        printf("Name: %s\n", members[i].name);
        printf("Age: %d\n", members[i].age);
        printf("Salary: %.2f\n\n", members[i].salary);
    }

    // Close the file
    fclose(file);

    return 0;
}
