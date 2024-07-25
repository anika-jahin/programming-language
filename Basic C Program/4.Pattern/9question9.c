/*Question:Print the pattern:
A
A B
A B C
A B C D */
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            int a=1;
        for(int j=1;j<=i;j++)
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
