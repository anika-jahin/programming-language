//Question:Write a program to print reverse of a given number.
#include<stdio.h>
int main()
{
    int n,lastDigit,r;
    printf("Enter the number:");
    scanf("%d",&n);
        printf("The reverse of a given number is:");
    while(n!=0)
    {
        //lastDigit=n%10;
        //n=n/10;
        //printf("%d",lastDigit);
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
        printf("%d",r);

    return 0;
}
