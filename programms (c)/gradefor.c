#include<stdio.h>
int main(){
    int grade,counter,total=0;
    float average;
    for(int i=0;i<10;i++){
        printf("Enter Grade " );
        scanf("%d",&grade);
        total+=grade;
    }
    average= (float)total/10;
    printf("The average grade is %.f\n",average);








    










    return 0;
}