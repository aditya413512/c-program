#include<stdio.h>

int main()
{
    char str[10];int i,j;
    printf("enter a name: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}