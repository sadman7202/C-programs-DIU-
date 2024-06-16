#include<stdio.h>
int main(){
    int matrix[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("matrix [%d][%d]= ",i,j);
        scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("matrix [%d][%d]=  %d",i,j,matrix[i][j]);
        
        }
        printf("\n");
    }
            
    printf("The [4][2] element is %d ",matrix[4][2]);










    return 0;
}