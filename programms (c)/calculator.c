#include<stdio.h>
int main()
{



    int num1,num2,sum;
    char op;
    printf("Please Select your Choice (+ - X /) :\n");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
    {
        printf("Please enter two digit : ");
        scanf("%d %d",&num1,&num2);
        sum= num1+num2;
        printf("Your result is : %d",sum);
        break;


    }
    case '-':
    {
        printf("Please enter two digit : ");
        scanf("%d %d",&num1,&num2);
        sum= num1-num2;
        printf("Your result is : %d",sum);
        break;

    }
    case 'X':
    {
        printf("Please enter two digit : ");
        scanf("%d %d",&num1,&num2);
        sum= num1*num2;
        printf("Your result is : %d",sum);
        break;
    }
    case '/':
    {
        printf("Please enter two digit : ");
        scanf("%d %d",&num1,&num2);
        sum= num1/num2;
        printf("Your result is : %d",sum);
        break;
    default:
        printf("Not a valid Operator");
    }
    }

    return 0;
}
