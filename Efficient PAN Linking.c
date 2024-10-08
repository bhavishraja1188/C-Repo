#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N<20)
    {
        printf("%d",N);
    }
    else  if(N>20)
    {
        printf("%d",N%20);
    }
    else
    {
        printf("0");
    }
}