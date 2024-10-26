#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        printf("Alphabet\n");
    }
    else if(isdigit(ch))
    {
        printf("Digit\n");
    }
    else if(isspace(ch))
    {
        printf("Space\n");
    }
    else
    {
        printf("Special Character");
    }
}