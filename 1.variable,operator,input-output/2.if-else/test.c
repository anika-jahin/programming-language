#include<stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    scanf("%lf",&n);
    a=n*100;
    b=a/10000;
    a=a%10000;
    c=a/5000;
    a=a%5000;
    d=a/2000;
    a=a%2000;
    e=a/1000;
    a=a%1000;
    f=a/500;
    a=a%500;
    g=a/200;
    a=a%200;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",b,c,d,e,f,g);
    h=a/100;
    a=a%100;
    i=a/50;
    a=a%50;
    j=a/25;
    a=a%25;
    k=a/10;
    a=a%10;
    l=a/5;
    a=a%5;
    m=a/1;
    a=a%1;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",h,i,j,k,l,m);
    return 0;
}
