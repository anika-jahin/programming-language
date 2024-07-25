/*Q:count the number of element in given array greater than a given number x; */
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter a number x: ");
    scanf("%d",&x);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i>x)
        {
            printf("%d ",array[i]);
        }
    }
}

