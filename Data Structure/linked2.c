#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
   int i,n,p;
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
        previous=current;
        first=current;
    }else
    {
        previous->next=current;
        previous=current;
    }
   }
   current->next=NULL;
   while(first!=NULL)
   {
       printf("%d\n",first->data);
       first=first->next;
   }
}
