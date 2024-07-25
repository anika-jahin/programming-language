//Q:calculate the sum of all the element in a given array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int array[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum +=array[i];
    }
    printf("%d",sum);
}
