/*Question:Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop;*/
#include<stdio.h>
int main()
{
    int i=65;
    while(i<=90)
    {
    printf("%d ",i);
    char ch=(char)i;//Typecasting;
    printf("%c\n",ch);
    i++;
    }
    return 0;
}
