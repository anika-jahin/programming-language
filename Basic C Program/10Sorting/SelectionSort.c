#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,n=5;
    int arr[]={6,4,2,1,3};
    printf("The unsorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //selection sort
    for(i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int minIndex=-1;
        for(j=i;j<n;j++)
        {
            if(arr[j]<min)//Finding the minimum element
            {
                min=arr[j];
                minIndex=j;
            }
        }
        //swap the minimum and first element of the unsorted array
        //swap minimum index with i;
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }

     printf("\n");
    printf("The sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
