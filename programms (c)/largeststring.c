#include<stdio.h>
int main(){
    int numbers[20],n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    printf("Enter your array :");
    
    for( int x=0;x<n;x++){
        printf("\nEnter element %d: ",x+1);
        scanf("%d",&numbers[x]);
    }
    printf("\nYour arrays are : ");
    for( int y=0;y<n;y++){
        printf("%d ",numbers[y]);
    }
    int count=numbers[0];
    for(int i=0;i<n;i++){
        if(numbers[i]>count)
        count=numbers[i];
    }
    printf("Largers number is : %d",count);





    









    return 0;
}