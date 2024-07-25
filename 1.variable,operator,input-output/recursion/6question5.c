//q:print the sum from 1 to n
#include<stdio.h>
int sum(int a)
{
    if(a==0)return 0;
    else
    return a+sum(a-1);

}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}

