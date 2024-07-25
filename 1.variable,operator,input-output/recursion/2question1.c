//Q: print n to 1 using recursion
#include<stdio.h>
int num(int a)
{
    if(a==0)
        return;
    else
    {
        printf("%d\n",a);
    return num(a-1);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
     num(n);
    return 0;
}
