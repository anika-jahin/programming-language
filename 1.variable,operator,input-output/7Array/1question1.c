/*Question:Given array of marks of students,if the marks of any student is less than 35 print its roll number
[roll number here refers to the index of the array.]*/

#include<stdio.h>
int main()
{
    int n,marks[10];
    printf("Enter the number of student:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]<35)
            printf("Roll: %d\n",i);
    }

}
