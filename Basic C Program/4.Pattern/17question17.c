/*Question:Print the pattern:
   *
  **
 ***
**** */
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of line:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)//for space;
        {
            printf(" ");

        }
        for(int k=1;k<=i;k++)//for star;
        {
            printf("*");
        }
        //printf("*");
        printf("\n");
    }
}
