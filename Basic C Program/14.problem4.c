//Question:Take float input and print the fractional part of the real number.
#include<stdio.h>
int main()
{
    float x;
    printf("Enter the decimal number: ");
    scanf("%f",&x);
    int y;
    y=x;
    printf("%d\n",y);
    float z=x-y;
    printf("The fractional number is: %f",z);
    return 0;
}
