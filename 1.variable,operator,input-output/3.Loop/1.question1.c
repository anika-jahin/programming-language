//Question:print hello world 'n' times.Take 'n' as input from user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+4)
    {
        printf("Hello World\n");
    }
    return 0;
}
