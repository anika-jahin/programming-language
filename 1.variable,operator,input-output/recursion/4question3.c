#include<stdio.h>
void inde(int a)
{
    if(a==0)return;
    printf("%d\n",a);
    inde(a-1);
    printf("%d\n",a);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    inde(n);
    return 0;
}
