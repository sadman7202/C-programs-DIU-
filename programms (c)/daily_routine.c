#include<stdio.h>
int main ()
{
    int day;
    printf("\n PLEASE SELECT DAY NO:");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("Saturday:\nClass Routine:\n8:30-12:30(ICE 113)\n2:30-4:00(MAT 101)");
        break;
    case 2:
        printf("Sunday:\nClass Routine:\n8:30-10:00(ICE 113\n10:00-11:30(ICE 111)\n11:30-1:00(GED 101\n1:00-4:00(PHY 102");
        break;
    case 3:
        printf("Monday:\nOFF DAY");
        break;
    case 4:
        printf("Tuesday:\nClass Routine:\n10:00-11:30 (MAT 101)\n1:00-2:30 (ENG 100)\n2:30-4:00 (PHY 101)");
        break;
    case 5:
        printf("Wedsday:\nClass Routine:\n8:30-10:00 (ICE 111)\n11:30-1:00 (ICE 113)\n1:00-2:30 (GED 101)\n2:30-4:00 (PHY 101)");
        break;
    case 6:
        printf("Thursday:\nOFF DAY");
        break;
    case 7:
        printf("Friday:\nHOLYDAY");
        break;
    default :
        printf("Invalid");
        break;
    }
}