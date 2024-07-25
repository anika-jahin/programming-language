#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF)
    {
        double time,min;
        min=12.00;
        for(int i=1;i<=n;i++)
        {
           scanf("%lf",&time);
           if(time<min)
            min=time;
        }
        printf("%.2lf\n",min);
    }
    return 0;
}
