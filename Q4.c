#include<stdio.h>
int main()
{
    float u, a, t, v,s;

    printf("enter initial velocity(u):");
    scanf("%f", &u);

    printf("enter acceleration(a):");
    scanf("%f", &a);

    printf("enter time (t):");
    scanf("%f", &t);

    v = u + (a*t);

    s = (u *t) + (0.5 * a * t * t );

    printf("\n final velocity(v)=%2f",v);

    printf("\n distance travelled (s) = %2f",s);

    return 0;
}