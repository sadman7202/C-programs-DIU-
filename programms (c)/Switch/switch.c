#include<stdio.h>
int main(){
    
    printf("Enter your input: ");
    char cha;
    scanf("%c",&cha);
    int ascii=cha;
    if (ascii>=65 && ascii<=123){
    switch (cha)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':printf("Vowel\n");
                break;
        default:printf("Consonent\n");
        break;
    }
    }
    else
    printf("its a digit");
    main();
    
    
    
    return 0;
}
    












