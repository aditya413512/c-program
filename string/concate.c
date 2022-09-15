#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[10];
    int i,j;
    printf("enter a 1st string: ");
    gets(s1);

    printf("enter a 2nd string: ");
    gets(s2);

   for(i=0;s1[i]!='\0';i++);
   s1[i]=' ';
   i++;
   for(j=0;s2[j]!='\0';i++,j++)
   {
    s1[i]=s2[j];
   }
   s1[i]='\0';
   printf("%s\n",s1);

}
