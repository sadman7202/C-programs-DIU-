#include <stdio.h>

int main() {
    int start, end;

    // Asking for the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    // Check if the range is valid
    if (start > end) {
        printf("Invalid range! The starting number should be less than or equal to the ending number.\n");
        return 1;
    }

    // Printing the multiplication table for each number in the range
    for (int i = start; i <= end; ++i) {
        printf("\nMultiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}