#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    if(X*10>Y)
    {
        printf("%d",Y*Z);
    }
    else
    {
        printf("%d",X*Z*10);
    }
}