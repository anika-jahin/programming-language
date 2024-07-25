/*Q:Given an array of integers numbers that is already sorted in no-decreasing order
,find two numbers such that they add up to a specific target number.*/
#include<stdio.h>
int main()
{
    int target=8;
    int array[7]={1,2,3,4,5,8,9,10};
    int i=0;
    int j=6;
    while(i<j){
    if(array[i]+array[j]==target)
    {
        printf("%d %d\n",array[i],array[j]);
        break;
    }else if(array[i]+array[j]> target)
    {
        j--;
    }else if(array[i]+array[j]< target)
    {
        i++;
    }
    }
    return 0;
}
