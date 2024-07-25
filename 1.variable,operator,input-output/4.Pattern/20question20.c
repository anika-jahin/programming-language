/*Question:print the pattern:
   *
  ***
 *****
******* */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<=n-1;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

