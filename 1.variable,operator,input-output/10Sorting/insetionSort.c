#include<stdio.h>
int main()
{
    int i,j,n=5;
    int arr[]={6,4,2,1,3};
    printf("The unsorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //Insertion sort
    for(int i=1;i<n;i++) //number of pass
    {
        int j=i;
        while(j>=1 &&arr[j]<arr[j-1]) //compare with left element
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }

     printf("\n");
    printf("The sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

