//Question:Write a program to print the sum of this Series:1-2+3-4+5-6....upto n;
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number to print the series:");
    scanf("%d",&n);
    int sum=0;
    i=1;
    while(i<=n)
    {
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
/*or
int n,sum;
scanf("%d",&n);
if(n%2==0)
    sum=(-n)/2;
    else
    sum=((-n)/2)+n;*/

