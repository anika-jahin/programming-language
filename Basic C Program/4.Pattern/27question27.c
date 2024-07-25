/*Question:print the pattern:
ABCDEFG
ABC EFG
AB   FG
A     G */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    char ch='A';
    for(int k=1;k<=2*n+1;k++)
    {
        printf("%c",ch);
        ch++;
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=nst;j++)
        {
            printf("%c",ch);
            ch++;
        }
        for(int l=1;l<=nsp;l++)
        {
            printf(" ");
            ch++;
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%c",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}

