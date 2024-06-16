#include<stdio.h>
int grade( int marksc){
    if (marksc>100 || marksc<0)
        printf("Invalid Number");
    else if (marksc>=80)
        printf("A+");  
    else if (marksc>=70)
        printf("A");
    else if (marksc>=60)
        printf("A-");
    else if (marksc>=50)
        printf("B");
    else if (marksc>=40)
        printf("C");
    else 
        printf("Fail");
        return 0;

        
}
int main ()
{
    float marksc,markse,marksp;
    printf("Enter your English marks: \n");
    scanf("%f",&markse);
    printf("Your English grade is "); grade(markse);
    printf("Enter your Chemistry marks: ");
    scanf("%f",&marksc);
    printf("\nYour English grade is "); grade(marksc);
    printf("Enter your Phycics marks: \n");
    scanf("%f",&marksp);
    printf("Your physics grade is "); grade(marksp);


          
    return 0;
}
