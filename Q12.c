#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%C",&ch);

    printf("\n previous character:%c",ch-1);
        printf("\n next character:%c",ch+1);
return 0;

}