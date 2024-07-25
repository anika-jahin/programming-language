//Question:check whether the number is prime or not
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        count++;
        break;//break statement
    }
    if(n==1)
    {
        printf("the number is neither prime nor composite");
    }
    if(count==0)
    {
        printf("The number is prime\n");
    }else
    {
        printf("The number is not prime\n");
    }
    return 0;
}
