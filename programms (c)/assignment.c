#include <stdio.h>

// Function to determine the grade value based on marks and return it
float grade(float marksc) {
    if (marksc > 100 || marksc < 0) {
        printf("Invalid Number");
        return -1.0;  // Indicate an invalid number
    }
    if (marksc >= 80) {
        printf("A+");
        return 4.00;  
    } else if (marksc >= 75 && marksc < 80) {
        printf("A");
        return 3.75;
    } else if (marksc >= 70 && marksc < 75) {
        printf("A-");
        return 3.50;
    } else if (marksc >= 65 && marksc < 70) {
        printf("B+");
        return 3.25;
    } else if (marksc >= 60 && marksc < 65) {
        printf("B");
        return 3.00;
    } else if (marksc >= 55 && marksc < 60) {
        printf("B-");
        return 2.75;
    } else if (marksc >= 50 && marksc < 55) {
        printf("C+");
        return 2.50;
    } else if (marksc >= 45 && marksc < 50) {
        printf("C");
        return 2.25;
    } else if (marksc >= 40 && marksc < 45) {
        printf("D");
        return 2.00;
    } else {
        printf("Fail");
        return -1.00;  // Indicate failure
    }
}

int main() {
    int a, q, p, m, f,at, total;
    float sumGrades = 0.0;
    int num_subjects = 5; // Number of subjects

    for (int i = 1; i <= num_subjects; i++) {
        printf("For subject %d\n", i);
        
        printf("Enter Assignment mark: ");
        scanf("%d", &a);
        
        printf("Enter quiz mark: ");
        scanf("%d", &q);
        
        printf("Enter presentation mark: ");
        scanf("%d", &p);
        
        printf("Enter Mid Exam mark: ");
        scanf("%d", &m);
        
        printf("Enter Final Exam mark: ");
        scanf("%d", &f);
        printf("Enter Attendence mark: ");
        scanf("%d", &at);
        
        total = a + q + p + m + f+ at;
        printf("\nSubject %d total mark is %d\n", i, total);
        
        printf("Subject %d Letter grade is ",i); float gradeValue = grade(total);
        printf("\nSubject %d grade is: %.2f\n", i, gradeValue);
        printf("\n");
        
        if (gradeValue != -1.00) {  // Only add valid grades
            sumGrades += gradeValue; // Add the grade value to the sum
        }
    }
    
    printf("\nYour semister grade is %.2f\n", sumGrades/5);

    return 0;
}