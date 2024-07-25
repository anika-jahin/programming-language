/*Question:Print the pattern:
1 2 3 4
1 2 3
1 2
1 */
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        a--;

    }
    return 0;
}


