/*If cost price and selling price of an item is input through the keyboard
write a program to determine whether the seller has made profit or incurred loss.
also determine how much profit he made or loss incurred*/
#include<stdio.h>
int main()
{
    int cost_price,selling_price;
    printf("Enter the cost price: ");
    scanf("%d",&cost_price);
    printf("Enter the selling price: ");
    scanf("%d",&selling_price);
    if(cost_price<selling_price)
    {
        printf("Seller has made profit\n");
    }else if(cost_price>selling_price)
    {
        printf("Seller has incurred loss\n");
    }else
    {
        printf("No profit\n");
    }
}
