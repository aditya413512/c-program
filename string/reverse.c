#include<stdio.h>

int main()
{
    char str[10],str1[10];
    int i,j;
    printf("enter a name: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);

    for(j=0,i=i-1;i>=0;i--,j++)
    {
        str1[j]=str[i];
    }
    str1[j]='\0';
    printf("%s",str1);
    return 0;
}