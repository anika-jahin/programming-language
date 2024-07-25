/*Question:Print the pattern:
   ****
  ****
 ****
**** */
#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number of line:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)//for spaces;
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//for star
        {
            printf("*");
        }
        for(l=i;l<=n-1;l++)//for star
        {
            printf("*");
        }
        printf("\n");
    }
}
