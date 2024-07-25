/*QUESTION: Write a program to print out all Armstrong number between 1 to 500.If sum of cubes
each digit of the number is equal to the number itself,then the number is called an Armstrong number.
for example:153=(1*1*1)+(5*5*5)+(3*3*3)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,last,sum=0;
    for(int i=1;i<=500;i++)
    {
        //int a=i;
        if(i<10)
        {
            //last=pow(i,3);
            sum=sum+(pow(i,3));
            if(sum==i)
                printf("the number %d is Armstrong\n",i);
        }else
        {
            int a=i;
        while(a!=0)
        {
            last=a%10;
            last=pow(last,3);
            sum=sum+last;
            a=a/10;
        }
        if(sum==i)
        {
            printf("The number %d is Armstrong\n",i);
        }
        }
    }
    return 0;
}
