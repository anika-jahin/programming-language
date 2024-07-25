#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Anika Tasnim";

    int x= strlen(str);
    char str1[x];
    printf("%d\n",x);
    strcpy(str1,str);
    printf("%s",str1);
    return 0;
}
