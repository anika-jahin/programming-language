//Q:count the number of triplets whose sum is equal to the given value of x.
#include<stdio.h>
int main()
{
    int n,x,count=0;
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

        for(int j=i+1;j<n;j++)
        {
            for(int k=i+1;k<n;k++)
            {
                if(array[i]+array[j]+array[k]==x)
                {
                    count++;
                    printf("%d,%d,%d\n",array[i],array[j],array[k]);
                }

            }

        }
    }
    printf("%d",count);
}


