/*question:print the pattern:
   A
  AB
 ABC
ABCD */
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number of line: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       char ch='A';
       for(int j=i;j<=n-1;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
           printf("%c",ch);
           ch++;
       }
       printf("\n");
   }
}
