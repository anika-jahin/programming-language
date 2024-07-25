#include<stdio.h>
#define SIZE 50
int stack[SIZE],top=-1;
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
void push(int val)
{
    if(isFull())
    {
        printf("Stack is full.");
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
        printf("Stack is empty");
    }else
    {
        val=stack[top];
        top--;
        return val;
    }
}
int main()
{
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        push(dec%2);
        dec=dec/2;
    }
    while(!isEmpty())
    {
        printf("%d",pop());
    }
}
