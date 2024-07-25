//QUESTION: Take positive integer input and tell if it is divisible by 5 or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("The number is divisible.");
    }else
    {
        printf("The number is not divisible.");
    }
    return 0;
}
