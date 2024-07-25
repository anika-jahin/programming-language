#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    int i,n;
    node *first,*current,*previous;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        current=(node *)malloc(sizeof(node));
        scanf("%d",&current->data);
        if(current==NULL)
        {
            printf("Memory cannot be allocated.");
        }
        if(i==0)
        {
            previous=current;
            first=current;
        }else
        {
            previous->next=current;
            previous=current;
        }
    }
    current->next=NULL;
    int ins;
    printf("Enter the location to insert:");
    scanf("%d",&ins);
    node *head=first,*h1=head,*newNode;
    newNode=(node *)malloc(sizeof(node));
    printf("Enter the element:");
    scanf("%d",&newNode->data);
    if(ins==1)
    {
        newNode->next=head;
        head=newNode;
    }else if(ins==n)
    {
        h1=head;
        for(i=1;i<n;i++)
        {
            h1=h1->next;
        }
        newNode->next=h1->next;
        h1->next=newNode;
    }
    else
    {
        h1=head;
        for(i=1;i<ins-1;i++)
        {
            h1=h1->next;
        }
        newNode->next=h1->next;
        h1->next=newNode;
    }
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
