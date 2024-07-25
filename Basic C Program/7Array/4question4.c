/*Q:Given an array of integers.change the value of all odd indexed element to its 2nd multiple and
increment all even indexed value by 10
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(i%2!=0)
        {
            printf("Odd:%d\n",array[i]*2);
        }else
        {
            printf("even:%d\n",array[i]+1);
        }
    }
}
