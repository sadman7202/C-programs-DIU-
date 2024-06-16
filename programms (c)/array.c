#include <stdio.h>
#include <string.h>

// Function prototypes
void getInput(char *name, char *id, char *dept, char *university);
int countTotalCharacters(char *name, char *id, char *dept, char *university);

int main() {
    char name[100];
    char id[100];
    char dept[100];
    char university[100];

    // Get user input
    getInput(name, id, dept, university);

    // Calculate total number of characters
    int totalCharacters = countTotalCharacters(name, id, dept, university);

    // Print the result
    printf("Total number of characters in the input: %d\n", totalCharacters);

    return 0;
}

// Function to get input from the user
void getInput(char *name, char *id, char *dept, char *university) {
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove the newline character

    printf("Enter your ID: ");
    fgets(id, 100, stdin);
    id[strcspn(id, "\n")] = '\0'; // Remove the newline character

    printf("Enter your department: ");
    fgets(dept, 100, stdin);
    dept[strcspn(dept, "\n")] = '\0'; // Remove the newline character

    printf("Enter your university: ");
    fgets(university, 100, stdin);
    university[strcspn(university, "\n")] = '\0'; // Remove the newline character
}

// Function to count total number of characters
int countTotalCharacters(char *name, char *id, char *dept, char *university) {
    return strlen(name) + strlen(id) + strlen(dept) + strlen(university);
}