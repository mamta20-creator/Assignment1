#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,height;
    float surfaceArea ,volume;

    printf("enter radius of the cylinder");
    scanf("%f", &radius);

    printf("enter height of the cylinder");
    scanf("%f",&height);

    surfaceArea = 2 * PI * radius*(radius + height);
    volume = PI * radius * radius * height;

    printf("\n surfaceArea of cylinder= %2f",surfaceArea);
    printf("\n volume of cylinder =%2f",volume);
    return 0;
}