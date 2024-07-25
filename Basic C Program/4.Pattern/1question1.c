/*Question:Print the pattern:
*****
*****
***** */
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
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
