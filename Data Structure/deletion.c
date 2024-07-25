#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *pre;
}node;
int main()
{
    int i,n;
    node *first,*previous,*current;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        current = (node *)malloc(sizeof(node));
        scanf("%d",&(current->data));
        current->next=NULL;
        current->pre=NULL;
        if(current==NULL)
        {
            printf("Memory cannot be allocated.");
        }else if(i==0)
        {
            previous=current;
            first=current;
        }else
        {
            previous->next=current;
            current->pre=previous;
            previous=current;
        }
    }
    current->next=NULL;
    current->pre=NULL;
    int del;
    printf("Enter the location to delete:");
    scanf("%d",&del);
    node *head=first,*temp,*h1=head;

    if(del==1)
    {
        temp=head;
        head=head->next;
        if(head!=NULL)
        {
            head->pre=NULL;
        }
    }else if(del==n)
    {
        h1=head;
        for(i=1;i<=n-2;i++)
        {
            h1=h1->next;
        }
        temp=h1->next;
        h1->next=NULL;
    }else
    {
        h1=head;
        for(i=1;i<=del-2;i++)
        {
            h1=h1->next;
        }
        temp=h1->next;
        h1->next=h1->next->next;
        if(h1->next!=NULL)
        {
            h1->next->pre=h1;
        }
    }
    free(temp);
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
