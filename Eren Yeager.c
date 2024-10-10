#include<stdio.h>
int main()
{
    int N,A,B;
    scanf("%d%d%d",&N,&A,&B);
    int res=(A*(N/2.0)+B*(N/2.0));
    printf("%d",res);
    return 0;
}
