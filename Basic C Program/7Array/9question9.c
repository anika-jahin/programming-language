//Q:Find the 2nd largest element in the given array
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,x;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int array[n];
    int max=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        {
            max2=max;
            max=array[i];
        }else if(array[i]!=max && max2<array[i])
        {
            max2=array[i];
        }
    }
    printf(" second largest: %d\n",max2);
}


