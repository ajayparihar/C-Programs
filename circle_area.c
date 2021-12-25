#include <stdio.h>
#define PI 3.14
int main()
{
    float square, radius;
    printf("Enter RADIUS of the CIRCLE (m)\n");
    scanf("%f", &radius);
        square = (radius * radius);
        printf("AREA of the circle is %0.2f m square)\n", square * PI);

    return 0;
}