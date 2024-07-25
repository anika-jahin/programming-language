#include<stdio.h>
int fact(int a)
{
    if(a==1 || a==0) return 1;
    else
    return a*fact(a-1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x=fact(n);
    printf("The factorial of the number= %d\n",x);
    return 0;
}
