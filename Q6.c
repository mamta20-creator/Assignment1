#include<stdio.h>
int main()
{
    float l,b,h,sa,v;
    printf("enter length,breadth and height:");
    scanf("%f%f%f", &l,&b,&h);

    sa =2*(1*b+b*h+1*h);
    v=l*b*h;

    printf("\n surface area=%2f",sa);
    printf("\n volume=%2f",v);
    return 0;
}