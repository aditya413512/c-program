#include<stdio.h>
#include<string.h>

void reversestr(char str[]);
void reverse(char str[],int start,int end);
int main()
{
    char str[30];
    printf("enter a name: ");
    scanf("%[^\n]s",str);
    reversestr(str);
    printf("%s\n",str);
    reverse(str,6,9);
    printf("%s\n",str);

    return 0;
}

void reversestr(char str[])
{
    int i,j,k;
    char temp;
    for(k=0;str[k]!='\0';k++);
    for(i=0,j=k-1;i<=j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

void reverse(char str[],int start,int end)
{
    char temp;
    while(start<=end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}