#include<stdio.h>
int main()
{
    int N,res,tot,add;
    scanf("%d",&N);
    res=N/10;
    tot=N%100;
    add=res+tot;
    printf("%d",add);
}