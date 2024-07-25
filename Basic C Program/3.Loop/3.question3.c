//Question:print all the even number from 1 to 100
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
