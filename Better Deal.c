#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=100-(a*1);
    int y=200-(b*2);
    if(x<y)
    {
        printf("FIRST");
    }
    else
    if(x>y)
    {
        printf("SECOND");
    }
    else
    {
        printf("BOTH");
    }
}