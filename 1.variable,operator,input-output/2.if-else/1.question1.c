#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x%2==0)//condition:If the number is divisible by 2 then the number is even.other wise the number is odd.
        //If the condition is true then the if block  will execute
    {
        printf("The number is even.\n");
    }else//otherwise the else block will execute.
    {
        printf("The number is odd.\n");
    }
    return 0;
}
