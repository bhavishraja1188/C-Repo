#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==7)
        {
          break;
        }
        n=n/10;
    }
    if(r==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}