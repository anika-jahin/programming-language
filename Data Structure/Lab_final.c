#include <stdio.h>
#include <stdlib.h>

struct Chess_Club_Member
{
    int membership_ID;
    char name[50];
    int rating;
    struct Chess_Club_Member *next;
}Chess_Club_Member;

struct Chess_Club_Member *head = NULL;

void initialize_Club_Membership()
{
    head = NULL;
    printf("Initialized.\n");
}


void add_MemberTo_Club()
{
     struct Chess_Club_Member *new_Member = (struct Chess_Club_Member *)malloc(sizeof( struct Chess_Club_Member));

    printf("Enter Membership ID: ");
    scanf("%d", &new_Member->membership_ID);
    printf("Enter Name: ");
    scanf("%s", new_Member->name);
    printf("Enter Chess Rating: ");
    scanf("%d", &new_Member->rating);

    new_Member->next = head;
    head = new_Member;

    printf("Successfully Added.\n");
}

void display_Club_Membership()
{
    struct Chess_Club_Member *current = head;

    while (current != NULL)
    {
        printf("Membership ID: %d\n", current->membership_ID);
        printf("Name: %s\n", current->name);
        printf("Chess Rating: %d\n", current->rating);

        current = current->next;
    }

}

void search_And_Update_Rating(int membership_ID)
{
    struct Chess_Club_Member *current = head;

    while (current != NULL)
    {
        if (current->membership_ID == membership_ID)
        {
            printf("Enter new Chess Rating for %s: ", current->name);
            scanf("%d", &current->rating);
            return;
        }
        current = current->next;
    }
    printf("Membership ID not found.\n");
}

int main()
{
    int input, membership_ID;

    while (1)
    {
        printf("DIU Chess Club Management System:\n");
        printf("1. Initialize Club Membership\n");
        printf("2. Add Member to Club\n");
        printf("3. Display Club Membership\n");
        printf("4. Search and Update Member Rating\n");
        printf("5. Exit\n");
        printf("Enter your input: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            initialize_Club_Membership();
            break;
        case 2:
            add_MemberTo_Club();
            break;
        case 3:
            display_Club_Membership();
            break;
        case 4:
            printf("Enter Membership ID to search and update rating: ");
            scanf("%d", &membership_ID);
            search_And_Update_Rating(membership_ID);
            break;
        case 5:
            printf("Exit.\n");
            return 0;
        default:
            printf("Invalid input.\n");
        }
    }
    return 0;
}
