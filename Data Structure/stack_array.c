#include<stdio.h>
#define SIZE 100
int stack[SIZE],top=-1;

int isFull()
{
    if(top==SIZE-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top==-1)
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
        top=top+1;
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
        top=top-1;
        return val;
    }
}
int peek()
{
    int val;
    if(isEmpty())
    {
        printf("Stack is empty.");
    }else
    {
        val=stack[top];
        return val;
    }
}
int main()
{
    int data,n,i;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        push(data);
    }
    printf("Peeked element: %d\n",peek());
    printf("Pooped element: %d\n",pop());
    printf("Pooped element: %d\n",pop());
    printf("Peeked element: %d\n",peek());
}
