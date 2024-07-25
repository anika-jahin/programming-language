//If an array arr contains n elements,then check if the given array is a palindrome or not.
#include<stdio.h>
void palindrome(int array[],int x)
{
    int i=0;
    int j=4;
    while(i<j)
    {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;

    }
}
int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    palindrome(array);
}


