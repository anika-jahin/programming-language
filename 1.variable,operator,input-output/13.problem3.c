//Question:Take integer as input and print half of the number.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the integer number: ");
    scanf("%d",&x);
    float y=x;
    float half;
    half=y/2;
    printf("Half of the number = %f\n",half);
    return 0;
}
