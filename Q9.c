#include<stdio.h>
int main()
{
    int amount;
    int ten, five, one;

    printf("enter the amount to withdraw:");
    scanf("%d",&amount);

    ten = amount/10;
    amount = amount % 10;

    five = amount/5;
    amount =amount %5;

    one = amount;

    printf("\n Currancy notes needed:");

    printf("\n 10 Rs notes = %d",ten);

        printf("\n 5 Rs notes = %d",five);

            printf("\n 1 Rs notes = %d",one);

            return 0;

}