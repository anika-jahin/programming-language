/*Question:print the pattern:
1234567
123 567
12   67
1     7 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int k=1;k<=2*n+1;k++)
    {
        printf("%d",k);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        for(int l=1;l<=nsp;l++)
        {
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
