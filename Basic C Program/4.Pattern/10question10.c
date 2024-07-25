/*QUESTION:Print the pattern:
1
A B
1 2 3
A B C D
1 2 3 4 5 */
#include<stdio.h>
int main()
{
    int row,j,k,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {

        for(j=1;j<=row;j++)
        {
            if(row%2==0)
            break;
            printf("%d ",j);
        }
        printf("\n");
        int a=1;
         for(k=1;k<=j;k++)
            {
                if(j%2!=0)
                break;
                if(k>j)
                    break;
                printf("%c ",(char)(a+64));
                a++;
            }
    }
    return 0;
}
