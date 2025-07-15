#include<stdio.h>
int main()
{
    float radius, area, circumference;

    printf("enter radius:");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("\n Area = %2f",area);
    printf("\n circumference= %2f",circumference);

    return 0;
}