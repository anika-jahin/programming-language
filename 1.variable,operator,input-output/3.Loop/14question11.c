//Question:Write a program to count digit of a given number and print the sum of the digit;

#include<stdio.h>
int main()
{
    int i,n,count=0,lastDigit=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        lastDigit=n%10;
        sum=sum+lastDigit;
        n=n/10;
        count++;


    }
    printf("The number of digit = %d\n",count);
    printf("%d",sum);
}
