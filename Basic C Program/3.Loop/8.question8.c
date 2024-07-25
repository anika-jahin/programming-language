//Question:Display this GP-100,50,25,...upto 'n' terms.
#include<stdio.h>
int main()
{
    float a;
    int n,i;
    scanf("%d",&n);
    a=100;
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",a);
        a=a/2;
    }
    return 0;
}
