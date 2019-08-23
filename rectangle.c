#include <stdio.h>
/* The purpose of this program is to calculate the perimeter and the area of a rectangle*/


int main()
{
    double width=24;
    double height=35;
    double perimeter = 0.0;
    double area = 0.0;

    width = 56.144;
    height = 144.376;
    perimeter = 2.0*(width+height);
    area = width*height;

    printf ("The width of the rectangle is: %f\n", width );
    printf ("The height of the rectangle is: %f\n", height);
    printf ("The perimeter of the rectangle is: %2.f\n", perimeter);
    printf ("The area of the rectangle is: %2.f\n", area);

    return 0;
}
