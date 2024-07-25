//q:print 1 to n
#include<stdio.h>
int increase(int a,int x)
{
    if(a>x) return 0;
    printf("%d\n",a);
    return increase(a+1,x);

}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    increase(1,n);
    return 0;
}
