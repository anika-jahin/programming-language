#include<stdio.h>
int main()
{
    int x,y;
    x=5,y=2;
    printf("%d\n",x+y);
    printf("%d\n",x-y);
    printf("%d\n",x*y);
    printf("%d\n",x/y);//here 5/2=2.5.but we print int value so the result is 2;

    //if we want to print 2.5 ,we have to use float data type.
    float a,b;
    a=5,b=2;
    printf("%f\n",a/b);//(%f)->format specifier for float type data.
    // for all real number operation we can use float data type.
    /*when we divide a integer by a integer then we get a integer value.but if we divide a integer number
    by float number or a float number by a integer number we get decimal number in float data type.*/

    return 0;

}
