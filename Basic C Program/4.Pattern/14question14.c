
/*Question:Print the pattern:
1
2 3
4 5 6
7 8 9 10 */
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");

    }
    return 0;
}
