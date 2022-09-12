#include<stdio.h>
int main()
{
    char s1[]="abcd";

    s1[0]='k';//modified
    //str="new string" invalid
    printf("%s\n",s1);//printf("%s\n",str)

    //------pointer to string-----//

    char *s2="abcd";
   // s2[0]='m';//not modified
    s2="new string";
    printf(" s2: %s\n",s2);

    //-------pointer to using string-------//

    char *s3[1];
    s3[0]="aditya";//it  always point first element of array 
    printf(" s3: %s\n",s3[0]);


    printf("s1:%d\n",sizeof(s1));//5
    printf("s2:%d",sizeof(s2));//4

}