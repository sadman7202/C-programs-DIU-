#include<stdio.h>
int main (){
      int n,count=0,i;
        printf("Enter any number: ");
        scanf("%d",&n);
    if (n<=1){
       printf("Invaild!!!Please enter any number which is grater than 1");
       return 1;
       }
    else {
        for (i=2; i<n; i++)
        {
            if (n%i==0){
                count=1;
                break;
            }    
        }
    }
    if (count==0){
        printf("%d is a prime number\n",n);
    }
    else{ 
        printf("%d is a composite number\n",n);
    }

    return 0;
}