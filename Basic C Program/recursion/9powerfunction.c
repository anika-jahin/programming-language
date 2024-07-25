#include<stdio.h>
int powerlog(int a,int b)
{
    if(b%2==0)
    {
         if(b==1)return a;
    else
    return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else
    {
         if(b==1)return a;
    else
    return powerlog(a,b/2)*powerlog(a,b/2)*a;
    }
}
int main()
{
    int a,b;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    printf("%d",powerlog(a,b));
    return 0;
}

