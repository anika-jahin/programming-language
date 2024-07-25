#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}node;
int main()
{
 int i,n,max,min;
 node *previous,*current,*first;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 current=(node *)malloc(sizeof(node));
 scanf("%d",&(current->data));
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
 max=first->data;
 min=first->data;
 while(first!=NULL)
 {
 if(first->data>max)
 {
 max=first->data;
 }else if(first->data<min)
 {
 min=first->data;
 }
 first=first->next;
 }
 printf("Maximum = %d\n",max);
 printf("Minimum = %d\n",min);
}
