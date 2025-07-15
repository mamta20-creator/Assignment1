#include<stdio.h>
int main()
{
    float a, b, AM, HM;
    printf("enter 2 numbers:");
    scanf("%f%f",&a, &b);

    AM = (a+b)/2;
    HM = (a*b)/(a+b);

    printf("\n Arithmetic mean:%2f",AM);
    printf("\n Harmonic mean:%2f", HM);

    return 0;
}