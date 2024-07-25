//Question:print the nTh fibonacci number
#include<stdio.h>
int main()
{
    int fibo=0,n,a,b;
    printf("Enter the nth number: ");
    scanf("%d",&n);
        a=0;
        b=1;
      printf("The fibonacci series upto %d terms: ",n);
    for(int i=0;i<=n;i++)
    {
        if(i==0)
            printf("%d ",a);
        else if(i==1)
            printf("%d ",b);
        else
        {
             fibo=a+b;
        printf("%d ",fibo);
        a=b;
        b=fibo;
        }
    }
    return 0;
}
