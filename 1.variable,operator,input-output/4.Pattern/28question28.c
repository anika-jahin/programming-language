/*Question:print the pattern:
1234321
123 321
12   21
1     1 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    int a=1;
    for(int m=1;m<=2*n+1;m++)
    {
        printf("%d",a);
        if(m>=n+1)
        a--;
        else
            a++;
    }
    printf("\n");

    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int l=1;l<=nst;l++)
        {
            printf("%d",l);
        }
         for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int l=nst;l>=1;l--)
        {
            printf("%d",l);
        }
        nsp+=2;
        nst--;


        printf("\n");
    }
    return 0;
}

