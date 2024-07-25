#include<stdio.h>
void sum(int x,int y)
{
    int n;
    n=x+y;
    printf("%d",n);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
     sum(a,b);
    return 0;
}

