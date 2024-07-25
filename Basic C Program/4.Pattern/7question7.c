/*Question:Print the pattern:
1
1 3
1 3 5
 */
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //int a=1;
        for(int j=1;j<=2*i-1;j=j+2)
        {
            printf("%d ",j);
                    //a=a+2;
        }
        printf("\n");


    }
    return 0;
}


