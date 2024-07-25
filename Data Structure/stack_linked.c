#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *head=NULL;

int isEmpty()
{
    if(head==NULL)
        return 1;
    else
        return 0;
}
void push(int val)
{
    struct node *newNode;
    newNode=(node *)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}
int pop()
{
    int val;
    if(isEmpty())
        return 1;
    else
    {
        val=head->data;
        head=head->next;
        return val;
    }
}
int peek()
{
    if(isEmpty())
        {
            printf("Stack is empty.");
        }
    else
    {
        return head->data;
    }
}
int display()
{
    struct node *current;
    current=head;
    if(isEmpty())
    {
        printf("Stack is empty.");
    }else
    {
        while(current!=NULL)
        {
            printf("%d\n",current->data);
            current=current->next;
        }
    }
}
int main()
{
    int i,n,data;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        push(data);
    }
    printf("Current element:\n");
    display();
    printf("Top element: %d\n",peek());
    printf("poped element: %d\n",pop());
    printf("Top element: %d\n",peek());
    printf("Current element:\n");
    display();
}
