/*Given the length and breadth of a rectangle,write a program to find
whether the area of the rectangle is greater than its perimeter*/
#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the breadth: ");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter)
    {
        printf("greater\n");
    }else if(area<perimeter)
    {
        printf("Less than the perimeter");
    }else
    {
        printf("Equal\n");
    }
    return 0;
}
