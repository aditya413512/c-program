#include<stdio.h>
#include<string.h>
void reverseStr(char str[])
{
    int i,j;
    char temp;
    for( i=0, j=strlen(str)-1;i<=j;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] =temp;

    }
}
void reverse_word(char str[],int start,int end)
{
    int w_start,w_end;

    for(w_start=w_end=start;w_end<end;end++)
    {
        if(str[w_end]==' ')
        continue;
        w_start=w_end;
        while(str[w_end]!=' ' && w_end<=end)
        w_end++;
        w_end--;
        reverse_word(str,w_start,w_end);
    
    }
}

int main()
{
     char str[50]={"i have many books"};

     reverseStr(str);
     puts(str);
     reverse_word(str,0,strlen(str)-1);
     puts(str);
} 