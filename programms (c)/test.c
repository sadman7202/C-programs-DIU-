#include <stdio.h>

// Function to count characters in a string
int countCharacters(char *str) {
    int count = 0;
    while (*str++) count++;
    return count;
}
int countCharacters2(int *str) {
    int count = 0;
    while (*str++) count++;
    return count;
}

int main() {
    char name[100];
    printf("Enter a your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Number of characters of name : %d\n", countCharacters(name));

    int ID[100];
    printf("Enter a your ID: ");
    fgets(name, sizeof(name), stdin);

    printf("Number of characters of ID : %d\n", countCharacters2(name));

    char dept[100];
    printf("Enter a your dept: ");
    fgets(dept, sizeof(dept), stdin);

    printf("Number of characters of name : %d\n", countCharacters(dept));
    char uni[100];
    printf("Enter your University : ");
    fgets(uni, sizeof(uni), stdin);

    printf("Number of characters of name : %d\n", countCharacters(uni));
    return 0;
}