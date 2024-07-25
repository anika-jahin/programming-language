#include<stdio.h>
int main()
{
    int p;
    p=5;
    printf("%d\n",p);

    //or
    int x=6;
    printf("%d\n",x);

    //or
    int a,b;
    a=2;
    b=3;
    printf("%d\n",a);
    printf("%d\n",b);

    //or
    int q,r,s;
    q=r=s=5;
    printf("%d %d %d\n",q,r,s);

    //or
    int c=5,d=5,e=5;
    printf("%d %d %d\n",c,d,e);
    return 0;
    /*invalid declaration
    int c=d=e=5 */

    /*variable naming rule:
    1.variables can start from an alphabet or underscore
    2.special character except "_" are not allowed
    3.commas or blanks are not allowed
    4.some particular keyword are not allowed.*/

}
