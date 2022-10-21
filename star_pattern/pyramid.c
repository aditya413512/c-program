#include<stdio.h>

int main()
{
    int i,space,n,k;
    printf("enter a row : ");
    scanf("%d",&n);//n=5
    
    for(i=1;i<=n;i++)       //for row
    {
    for(space=1;space<=n-i;space++) /* for space //i=1 ,j=4(space)
                                    i=1 ,j=4(space) k=1;(print *)2*1-1=1
                                    i=2 ,j=3(space) k=3;2*2-1=3
                                    i=3 ,j=2(space) k=5;2*3-1=5
                                    i=4 ,j=1(space) k=7;2*4-1=7
                                    i=5 ,j=0(space) k=9;2*5-1=9 */
    {
        printf("  ");
    }
    for(k=1;k<=2*i-1;k++)
    {
       printf("* ");
    }
    printf("\n");
    }
}