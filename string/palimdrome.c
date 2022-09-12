#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[50];
	int i,j,k;
	printf("Enter a string : ");
	gets(str);
	for(k=0;str[k]!='\0';k++);
	for(i=0,j=k-1; i<=j; i++,j--)
		if(str[i]!=str[j])
        {
        printf("String is not a palindrome\n" );
	    break;
        }
	if(i>j)
		printf("String is a palindrome\n" );
	
	return 0;
}
