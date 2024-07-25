//Q:write a program to copy the contents of one array into another in the reverse order
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int copy[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);

    }
    for(int i=1;i<=n;i++)
    {
        copy[i]=array[n-i];
        printf("%d ",copy[i]);
        //array[n-2];
    }

}

