//write a program to print the factorial of a given number;
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
    {
       fact=fact*i;
    }
    printf("The factorial of %d : %d\n",i,fact);
    int fact=1;

    }

    //printf("The factorial is:%d",fact);
    return 0;
}

