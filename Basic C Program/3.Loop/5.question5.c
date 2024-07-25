//Question: Display this AP-1,3,5,7,9...upto n terms
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)//rules:a+(n-1)*d
    {
        printf("%d ",i);
    }
    return 0;
}
