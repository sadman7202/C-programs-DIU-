#include<stdio.h>
int main (){
    int i,n,s,e,c=0;
    printf("Enter the starting number of range: ");
    scanf("%d",&s);
    printf("\nEnter the ending number of range: ");
    scanf("%d",&e);
    while(s>e){
        printf("Invalid input");
        printf("\nEnter the starting number of range: ");
        scanf("%d",&s);
        printf("\nEnter the ending number of range: ");
        scanf("%d",&e);
    }
for(i=s;i<=e;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            c=1;
            break;
        }
    }
    if(c==0)
    printf("\n%d is a prime number",i);
    
    



}

     return 0;
}