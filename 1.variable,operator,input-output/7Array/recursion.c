#include<stdio.h>
int increase(int a,int b)
{
    if(a>b)return 0;
    printf("%d\n",a);
    return increase(a+1,b);
}
int main()
{
    int n;
    scanf("%d",&n);
    increase(1,n);

    return 0;
}

