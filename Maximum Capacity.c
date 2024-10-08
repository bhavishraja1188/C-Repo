#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X*Y<=500 && X<=8)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}