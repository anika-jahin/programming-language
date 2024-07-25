/*Question:print the pattern:
*******
*** ***
**   **
*     * */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int m=1;m<=2*n+1;m++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=nst;l++)
        {
            printf("*");
        }
         for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        nsp+=2;
        nst--;


        printf("\n");
    }
}

