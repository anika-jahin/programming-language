/*Question:print the pattern:
   1
  123
 12345
1234567 */
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",k);
        }

        printf("\n");
    }
}
