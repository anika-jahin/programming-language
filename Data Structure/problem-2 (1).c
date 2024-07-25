// // Question 2: Managing DIU Chess Club Membership

// You've been assigned to create a program to manage the membership of the Daffodil International University (DIU) Chess Club. Each node in the linked list represents a club member and contains the following information:
// struct ChessClubMember {
// int membershipID;
// char name[50];
// int rating;
// struct ChessClubMember *next;
// };

// Your task involves implementing functionalities related to managing the DIU Chess Club membership:

// 1. Initialize Club Membership: Write a C program to create an empty linked list representing the Chess Club membership.

// 2. Add Member to Club: Implement a function to add a new member to the club. The program should allow the user to input the member's ID, name, and chess rating.

// 3. Display Club Membership: Develop a function that displays details of all members in the club. Ensure the program prints clear and readable information for each member.

// 4. Search and Update Member Rating: Extend your program to include a function allowing the user to search for a member by their ID and update their chess rating. If the specified membership ID is not found, display an appropriate message.

// Your program should include suitable functions for each operation, handle user inputs, and properly manage the linked list structure. Additionally, include comments or explanations within your code to clarify significant parts of the implementation.
// Thoroughly test your program with various scenarios to ensure accuracy and effectiveness in managing the DIU Chess Club membership.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ChessClubMember
{
    int membershipID;
    char name[50];
    int rating;
    struct ChessClubMember *next;
};

struct ChessClubMember *head = NULL;

void initializeClubMembership()
{
    head = NULL;
    printf("Chess Club Membership Initialized.\n");
}

void addMemberToClub()
{
    struct ChessClubMember *newMember = (struct ChessClubMember *)malloc(sizeof(struct ChessClubMember));

    printf("Enter Membership ID: ");
    scanf("%d", &newMember->membershipID);
    printf("Enter Name: ");
    scanf("%s", newMember->name);
    printf("Enter Chess Rating: ");
    scanf("%d", &newMember->rating);

    newMember->next = head;
    head = newMember;

    printf("Member Added to the Chess Club.\n");
}

void displayClubMembership()
{
    printf("\nDIU Chess Club Membership:\n");

    struct ChessClubMember *current = head;

    while (current != NULL)
    {
        printf("Membership ID: %d\n", current->membershipID);
        printf("Name: %s\n", current->name);
        printf("Chess Rating: %d\n", current->rating);

        current = current->next;
    }

    if (head == NULL)
    {
        printf("No members in the Chess Club.\n");
    }
}

void searchAndUpdateRating(int membershipID)
{
    struct ChessClubMember *current = head;

    while (current != NULL)
    {
        if (current->membershipID == membershipID)
        {
            printf("Enter new Chess Rating for %s: ", current->name);
            scanf("%d", &current->rating);
            printf("Chess Rating updated for %s.\n", current->name);
            return;
        }
        current = current->next;
    }
    printf("Member with Membership ID %d not found.\n", membershipID);
}

int main()
{
    int choice, membershipID;

    while (1)
    {
        printf("\nDIU Chess Club Management System:\n");
        printf("1. Initialize Club Membership\n");
        printf("2. Add Member to Club\n");
        printf("3. Display Club Membership\n");
        printf("4. Search and Update Member Rating\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            initializeClubMembership();
            break;
        case 2:
            addMemberToClub();
            break;
        case 3:
            displayClubMembership();
            break;
        case 4:
            printf("Enter Membership ID to search and update rating: ");
            scanf("%d", &membershipID);
            searchAndUpdateRating(membershipID);
            break;
        case 5:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
