#include<stdio.h>
int main()
{
    float fahrenheit,celsius,kelvin;

    printf("enter temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit =(celsius * 9/5) +32;
    kelvin = celsius + 273.15;

    printf("\n Temperature in celsius: %2f",celsius);

    printf("\n Temperature in fahrenheit :%2f",fahrenheit);

        printf("\n Temperature in kelvin :%2f",kelvin);

return 0;

    
}