/*Question:Two numbers are entered into through the keyboard.write a program to
find the value of one number raised to the power of another.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,value;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    value=pow(a,b);
    printf("The value is: %d",value);

}
