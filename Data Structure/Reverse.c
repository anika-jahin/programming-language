#include<stdio.h>
#define SIZE 100
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
       printf("Stack is full.");
   }else
   {
       top++;
       stack[top]=val;
   }
}
char pop()
{
    char val;
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
int main()
{
    int n,i;
    char name;
    printf("Enter the number of letter: ");
    scanf("%d",&n);
    printf("Enter the name: ");
    for(i=0;i<=n;i++)
    {
        scanf("%c",&name);
        push(name);
    }
    printf("Reverse of the name: ");
    for(i=0;i<n;i++)
    {
        printf("%c",pop());
    }
}
