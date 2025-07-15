#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    printf("enter x,y for the first point:");
    scanf("%f%f",&x1,&y1);

    printf("enter x,y for the second point:");
    scanf("%f%f",&x2,&y2);

    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("Distance between the two points=%2f",distance);
     return 0;


}