#include<stdio.h>
int reverse(int y){
    int a,b,c,d,e,f;
    a=y/1000;
    b=y%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    printf("Your reverse number is %d%d%d%d",f,e,c,a);
    printf("\nSum of the numbers are : %d",f+e+c+a);
    if(f>e && f>c && f>a )
        printf("\n%d is the highest number ",f);
    else if(e>f && e>c && e>a )
        printf("\n%d is the highest number ",e);

    else if (c>e && c>f && c>a )
        printf("\n%d is the highest number ",c);
    else
        printf("\n%d is the highest number ",a);
    

    return 0;
}

int main (){
    int x;
    printf("enter your numbers ");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
