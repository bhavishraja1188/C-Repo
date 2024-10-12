#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=a+b;
    int e=a+c;
    int f=b+a;
    int g=b+c;
    int h=c+a;
    if(d==c or e==b or f==c or g==a or h==b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}