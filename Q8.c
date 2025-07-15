#include<stdio.h>
int main()
{
    float id,basic_salary,hra,da,prof_tax, net;

    printf("enter id:");
    scanf("%f",&id);

    printf("enter basic_salary:");
    scanf("%f",&basic_salary);

    hra = 0.10 * basic_salary;

    da = 0.30 * basic_salary;
    prof_tax =0.05 * basic_salary;

    net = basic_salary + hra +da-prof_tax;

    printf("\n net salary=%2f",net);

    return 0;


}