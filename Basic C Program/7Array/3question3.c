//Q:Find the maximum value out of all the elements in the array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int array[n];
    int max=array[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]> max)
            max=array[i];
    }
    printf("max=%d",max);
    return 0;
}
