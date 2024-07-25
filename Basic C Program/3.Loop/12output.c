#include<stdio.h>
int main()
{
    int x=4,y,z;
    y=--x;//pre-Increment=first increment then update the value;
    z=x--;//post-increment=first update the value then increment the value;
    printf("%d %d %d\n",x,y,z);
    printf("\n%d",x);
    return 0;
}
