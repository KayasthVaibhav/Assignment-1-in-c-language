/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius */

#include <stdio.h>
#include <conio.h>

int main()
{
    int Area, radius;
    printf(" Take radius of circle from User :");
    scanf("%d",&radius);
    Area = 3.14 * radius * radius;
    printf(" \n Area of circle is Area = %d having the radius = %d\n", Area, radius);
    printf(" Replace A with Area %d & R With radius %d\n", Area, radius);
    return 0;

}
