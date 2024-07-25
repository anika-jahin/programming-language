#include<stdio.h>
int main()
{
    int a,b,reminder;//a>b
    printf("Enter dividend: ");
    scanf("%d",&a);
    printf("Enter divisor:");
    scanf("%d",&b);

    int qoutient;
    qoutient=a/b;
    reminder=a-(qoutient*b);//we can use % to find reminder directly.
    //or
    //reminder=a%b;
    printf("Reminder is : %d\n",reminder);
    return 0;
    //a%b=a [a<b]
}
