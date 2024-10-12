#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X<4)
    {
        printf("MILD");
    }
    else
    if(X>=4 && X<7)
    {
        printf("MEDIUM");
    }
    else
    {
        printf("HOT");
    }
}