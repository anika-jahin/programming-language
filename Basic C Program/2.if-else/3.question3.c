//Question: Any year is input through the keyboard.write a program to determine whether the year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        printf("Leap year.");
    }else
    {
        printf("The year is not leap year.");
    }
    return 0;
}
