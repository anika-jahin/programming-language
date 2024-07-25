/*Question:print the pattern:
   1
  121
 12321
1234321 */
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);

        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}

