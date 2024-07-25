//q:print the sum from 1 to n
#include<stdio.h>
void sum(int a,int x)
{
    if(a==0)
    {
        printf("%d",x);
        return;
    }
    return sum(a-1,x+a);

}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
