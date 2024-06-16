#include<stdio.h>
int main(){
    int row,i,j;               
    printf("Enter row ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
printf("\n\nreverse pyramid: \n\n");
    for(i=row;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }










    return 0;
}