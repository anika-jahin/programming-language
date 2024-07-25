//Q:Write a program to insert a new character in a string at a given position

#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    gets(str);
    puts(str);
    for(int i=5;i>=2;i--)
    {
        str[i+1]=str[i];
    }
    str[2]='p';
    puts(str);
    return 0;
}
