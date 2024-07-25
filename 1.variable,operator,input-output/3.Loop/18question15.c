//write a program to print the factorial of first n number;
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++)
    {
        for(int j=i;j<=i;j++)
        {
            fact=fact*i;
        }

       printf("The factorial of %d is: %d\n",i,fact);
    }

    //printf("The factorial is:%d",fact);
    return 0;
}
