/*Question:Print the pattern:
A B C D
A B C D
A B C D
A B C D */
#include<stdio.h>
int main()
{
    int i,n,m,x;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            int a=1;
        for(int j=1;j<=n;j++)
        {
            //int d=a+64;
            //char ch=(char)d;
            printf("%c ",(char)a+64);
            a++;
        }
        printf("\n");

    }
    return 0;
}
