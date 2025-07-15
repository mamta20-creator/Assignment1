#include<stdio.h>
int main()
{
    float length, width, height,door_width,door_height,win_width,win_height;
    float wall_area, door_area, window_area, paint_area, whitewash_area;
    printf("enter the length, width, height of the room:");
    scanf("%f%f%f",&length,&width,&height);

    printf("enter the width and height of the door:");
    scanf("%f%f",&door_width,&door_height);

    printf("enter the width and height of the window:");
    scanf("%f%f",&win_width,&win_height);

    wall_area = 2 * height *(length+width);

    door_area = door_width * door_height;

    window_area= 2*(win_width * win_height);

    paint_area = wall_area- door_area - window_area;

    whitewash_area = length * width;

    printf("\n area to be painted(walls):%2f",paint_area);

    printf("\narea to be whitewashed(roof):%2f",whitewash_area);
    return 0;
}