/*Question:Print the pattern:
1 2 3 4
1 2 3 4
1 2 3 4 */
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    printf("Enter the number of element: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
    return 0;
}

