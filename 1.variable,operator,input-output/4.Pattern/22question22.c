/*Question:print the pattern:
   A
  ABC
 ABCDE
ABCDEFG */
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}
