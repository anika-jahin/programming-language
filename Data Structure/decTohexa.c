#include<stdio.h>
#define SIZE 50
char stack[SIZE];
int top=-1;
int isEmpty()
{
    if(top==-1)
        return 1;
    else
    return 0;
}
int isFull()
{
    if(top==SIZE-1)
        return 1;
    else
        return 0;
}
void push(char val)
{
    if(isFull())
    {
        printf("Stack is full");
    }else
    {
        top++;
        stack[top]=val;
    }
}
int pop()
{
    int val;
    if(isEmpty())
    {
        printf("Stack is empty.");
    }else
    {
        val=stack[top];
        top--;
        return val;
    }
}
int main()
{
    int dec,rem;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        rem=dec%16;
        if(rem==10)
            push('A');
        else if(rem==11)
            push('B');
        else if(rem==12)
            push('C');
        else if(rem==13)
            push('D');
        else if(rem==14)
            push('E');
        else if(rem==15)
            push('F');
        else
            push(rem+'0');
            dec=dec/16;

    }
    printf("Hexadecimal Number: ");
        while(!isEmpty())
        {
            printf("%c",pop());
        }
        return 0;
}
