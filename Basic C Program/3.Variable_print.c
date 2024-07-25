#include<stdio.h>
int main()
{
    int x;//x is the variable.
    x=2;
    printf("%d\n",x);//(%d)=format specifier/ placeholder for an integer of printf function;

    x=4;//when we update the value of x then the printing value is 4
    printf("%d\n",x);

    x=x+8;// here left x is new variable x.and the value of right x is 4 so 4+8=12 is our output
    printf("%d",x);
    return 0;
}
