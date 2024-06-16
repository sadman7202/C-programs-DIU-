#include<stdio.h>
int main(){
    int matrixa[10][10],matrixb[10][10],matrixc[10][10],row1,col1,row2,col2,i,j,k,sum=0;
    printf("Enter matrix A row and colum: ");
    scanf("%d %d",&row1,&col1);
    printf("\nEnter matrix B row and colum: ");
    scanf("%d %d",&row2,&col2);
    while(row1!=col2){
        printf("\nMatrix A row and Matrix B colum must be same ");
        printf("\nEnter matrix A row and colum: ");
        scanf("%d %d",&row1,&col1);
        printf("\nEnter matrix b row and colum: ");
        scanf("%d %d",&row2,&col2);
    }
    //input for A matrix 
    printf("\nEnter A matrix : ");
    for(i=0;i<row1;i++){
        printf("\n");
        for(j=0;j<col1;j++){
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d",&matrixa[i][j]);
        }
    }
    //printing A matrix 
    printf("\nMatrix A is ");
    for(i=0;i<row1;i++){
        printf("\n");
        for(j=0;j<col1;j++){
            printf("%d ",matrixa[i][j]);
            
        }
    }
    //input for B matrix 
    printf("\nEnter B matrix : ");
    for(i=0;i<row2;i++){
        printf("\n");
        for(j=0;j<col2;j++){
            printf("\nB[%d][%d]= ",i,j);
            scanf("%d",&matrixb[i][j]);
        }
    }
    //printing B matrix 
    printf("\nMatrix B is ");
    for(i=0;i<row2;i++){
        printf("\n");
        for(j=0;j<col2;j++){
            printf("%d ",matrixb[i][j]);
            
            }
    }
    //multiplying matrix 
    /*for(i=0;i<row1;j++){
        for(j=0;j<col2;j++){
            for(k=0;k<col1;j++){

                sum=sum+matrixa[i][j] * matrixb[k][j];
            }
            matrixc[i][j]=sum;
            sum=0;

            }
    }*/
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            sum = 0;
            for (k = 0; k < col1; k++) {
                sum += matrixa[i][k] * matrixb[k][j];
            }
            matrixc[i][j] = sum;
        }
    }
    //printing multiplied matrix 
    printf("\nResultant matrix is: ");
    for(i=0;i<row1;i++){
        printf("\n");
        for(j=0;j<col2;j++){
            printf("%d ",matrixc[i][j]);
            
            }
    }

    return 0;
}