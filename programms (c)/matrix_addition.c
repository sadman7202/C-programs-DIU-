#include<stdio.h>
int main(){
    int matrixa[10][10],matrixb[10][10],matrixc[10][10],row,col,i,j;
    printf("Enter how many row and coloum: ");
    scanf("%d %d",&row,&col);
    printf("\nEnter A matrix : ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d",&matrixa[i][j]);
        }
    }
    printf("\nMatrix A is ");
    for(i=0;i<row;i++){
        printf("\t");
        for(j=0;j<col;j++){
            printf("\nA[%d][%d]=%d ",i,j,matrixa[i][j]);
            
        }
    }
    printf("\nEnter B matrix : ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nB[%d][%d]= ",i,j);
            scanf("%d",&matrixb[i][j]);
        }
    }
    printf("\nMatrix B is ");
    for(i=0;i<row;i++){
        printf("\t");
        for(j=0;j<col;j++){
            printf("\nB[%d][%d]=%d ",i,j,matrixb[i][j]);
            
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           matrixc[i][j]=matrixa[i][j]+matrixb[i][j];
            
        }
    }
    printf("\nAddition of Matrix A and B is ");
    for(i=0;i<row;i++){
        printf("\t");
        for(j=0;j<col;j++){
            printf("\nC[%d][%d]=%d ",i,j,matrixc[i][j]);
            
        }
    }

    











    return 0;
}