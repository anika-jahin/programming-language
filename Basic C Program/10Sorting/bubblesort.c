#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i,j,n=5;
    int arr[]={6,4,2,1,3};
    printf("The unsorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++)  //Number of pass
    {
        bool flag=true; //This data type can hold one of two values: true or false. It is used to represent logical values
        for(int j=0;j<n-1;j++)  // number of comparisons
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                 arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    printf("The sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
