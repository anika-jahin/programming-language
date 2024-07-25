#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct contact
{
    char name[50];
    char number[20];
    struct contact *next;
}node;

node *head=NULL;

int inserAtFirst()
{
   // FILE *fp;
   //fp=fopen("contact.txt","a");
   //if(fp==NULL)
   // {
       // printf("File not found\n");
    //}
   char name[50];
   char number[20];
   printf("Enter Name: ");
   scanf("%s", &name);
   printf("Enter number: ");
   scanf("%s",&number);

   node *temp = (node *)malloc(sizeof(node));

   strcpy(temp->name,name);
   strcpy(temp->number,number);
   temp->next =NULL;

   temp->next = head;
   head = temp;

   //fwrite(&node,sizeof(node),1,fp);
    //fclose(fp);
}
int insertAtEnd()
{
     FILE *fp;
   fp=fopen("contact.txt","a");
   if(fp==NULL)
    {
        printf("File not found\n");
    }
    char name[50];
   char number[20];
   printf("Enter Name: ");
   scanf("%s", &name);
   printf("Enter number: ");
   scanf("%s",&number);

   node *temp = (node *)malloc(sizeof(node));

   strcpy(temp->name,name);
   strcpy(temp->number,number);
   temp->next =NULL;

   node *current = head;

   if(head==NULL)
   {
       head=temp;
       return 0;
   }
   while(current->next != NULL)
   {
       current=current->next;
   }
   current->next=temp;

   fwrite(&node,sizeof(node),1,fp);
    fclose(fp);
}

void display()
{
    node *current=head;

    printf("        CONTACT LIST        \n");
    printf("****************************\n");

    while(current != NULL)
    {
        printf("Name: %s\n",current->name);
        printf("Mobile: %s\n",current->number);

         printf("****************************\n");
         current=current->next;
    }
}

void DeleteAtFirst()
{
    node *temp;
    temp=head;
    head=head->next;

    printf("Deletion from first is completed.\n\n");
}

void DeleteAtLast()
{
    if(head==NULL)
    {
        printf("List is empty.");
        return;
    }
    node *temp,*previous;
    temp=head;
    previous=NULL;


   while(temp->next != NULL) //for traverse
   {
       previous=temp;
       temp=temp->next;
   }

   if(previous == NULL) // if there is only one node
   {
       head=NULL;
       printf("Contact list is empty.");
   }else  //otherwise
   {
       previous->next=NULL;
   }

   printf("Deletion from last is completed.\n\n");
}


int main()
{
    while(1)
    {
        printf("1 Insert at first\n");
        printf("2 Insert at end\n");
        printf("3 Display the contact list\n");
        printf("4 Delete from first\n");
        printf("5 Delete from last\n");

        int choice;
        printf("Enter a choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            inserAtFirst();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            display();
            break;
        case 4:
            DeleteAtFirst();
            break;
        case 5:
            DeleteAtLast();
            break;
        default:
            printf("Wrong entry.");
            break;
        }
    }
    return 0;
}

