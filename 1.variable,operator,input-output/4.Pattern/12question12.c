/*Question:Print the pattern:
******
*    *
*    *
****** */
#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the row number:");
    scanf("%d",&n);
    printf("Enter the column number: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        if(i==1 || i==m)
        {
            for(j=1;j<=n;j++)
        {
            printf("*");
        }
        }else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
