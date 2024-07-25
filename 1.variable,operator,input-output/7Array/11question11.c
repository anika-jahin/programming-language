//Q:write a program to reverse the array to without using extra array
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);

    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",array[n-i]);
    }

}

