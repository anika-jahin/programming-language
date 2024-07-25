/*Question:
If a three-digit number is input through the keyboard ,write a program to calculate the sum of its digit.*/

#include<stdio.h>
int main()
{
    int x,a,b,c,sum;
    printf("Enter the three digit number: ");
    scanf("%d",&x);
    a=x%10;
    b=a%10;
    c=b%10;
    sum=a+b+c;
    printf("Sum of its digit: %d",sum);

    return 0;
}
