#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i,j;
    printf("enter a 1st string: ");
    gets(s1);
    printf("enter a 2nd string: ");
    gets(s2);
 
 
  for(i=0;s2[i]!='\0';i++)
{
  s1[i]=s2[i];
}
  s1[j]='\0';
  printf("s1: %s\n",s1);
  printf("s2: %s\n",s2);
  return 0;
}