#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}node;
int main()
{
    int i;
    node *first,*current,*next;
    first=(node *)malloc(sizeof(node));
    current=(node *)malloc(sizeof(node));
    next=(node *)malloc(sizeof(node));

    first->data=10;
    first->link=current;

    current->data=20;
    current->link=next;

    next->data=30;
    next->link=NULL;

    while(first!=NULL)
    {
        printf("%d\n",first->data);
        first=first->link;
    }
}
