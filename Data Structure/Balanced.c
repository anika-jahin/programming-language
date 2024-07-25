#include<stdio.h>
#define SIZE 100
char stack[SIZE];
int top=-1;
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
        top--;
        return val;
    }
}
int main()
{
    char array[100],ch;
    printf("Enter the element:");
    scanf("%s",&array);
    for(int i=0;array[i]!='\0';i++)
    {
        if(array[i]=='('|| array[i]=='{' || array[i]=='[')
            push(array[i]);
        else if(array[i]==')' || array[i]=='}' || array[i]==']')
        {
            ch=pop();
            if((ch=='(' && array[i]==')') || (ch=='{' && array[i]=='}') || (ch=='[' && array[i]==']') )
                continue;
            else
            {
                printf("Imbalanced");
                return 0;
            }
        }else
        continue;
    }
    if(isEmpty())
    {
        printf("Balanced");
        return 0;
    }else
    {
        printf("Imbalanced");
        return 0;
    }
}
