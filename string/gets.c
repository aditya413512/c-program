#include<stdio.h>
int main()
{
    char name[6];
    printf("enter a name: ");
    gets(name);//ignore buffer size and overloading
    printf("enter name is : ");
    puts(name);
    return 0;
}