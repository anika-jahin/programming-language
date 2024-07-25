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
        }else if(i==0)
        {
            first=current;
            previous=current;
        }else
        {
            previous->next=current;
            previous=current;
        }
    }
    current->next=NULL;
    int del;
    printf("Enter the location to delete: ");
    scanf("%d",&del);
    node *head=first,*h1=head,*temp;

    if(del==1)
    {
        temp=head;
        head=head->next;
    }else if(del==n)
    {
        h1=head;
        for(i=1;i<n-1;i++)
        {
            h1=h1->next;
        }
        temp=h1->next;
        h1->next=NULL;
    }else
    {
        h1=head;
        for(i=1;i<del-1;i++)
        {
            h1=h1->next;
        }
        temp=h1->next;
        h1->next=h1->next->next;
    }
    free(temp);
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
