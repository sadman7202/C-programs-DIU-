#include<stdio.h>
int main(){
    int numbers[20],n,i;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    printf("Enter your array :");
    gets(numbers);
    int count=numbers[0];
    while(numbers[i]='\0'){
        if(numbers[i]>count);
            count=numbers[i];


        i++;
    }
    printf("largest number is %d",count);
    





    









    return 0;
}