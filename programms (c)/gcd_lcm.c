#include<stdio.h>
int main(){
    int num1,num2,n1,n2,reminder=0,gcd,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0){
        reminder=n1%n2;
        n1=n2;
        n2=reminder;
        }
    printf("GCD is %d",gcd=n1);
    printf("LCM is %d",lcm=(num1*num2)/gcd);

    




    return 0;

}