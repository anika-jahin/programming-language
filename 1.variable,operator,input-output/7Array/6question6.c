//q:find the difference between the sum of elements of even indices to the sum of elements of odd indices
#include<stdio.h>
int main()
{
    int n,x;
    int sum1=0,sum2=0;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i%2==0)sum1+=array[i];
        if(i%2!=0)sum2+=array[i];
    }
        printf("difference: %d\n",sum1-sum2);

}
