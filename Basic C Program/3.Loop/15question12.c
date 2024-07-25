//Question:write a program to print sum of all the even digit of a given number.
#include<stdio.h>
int main()
{
    int n,sum=0,lastDigit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        lastDigit=n%10;
        if(lastDigit%2==0)
            sum=sum+lastDigit;
        n=n/10;
    }
    printf("The sum=%d\n",sum);
}
