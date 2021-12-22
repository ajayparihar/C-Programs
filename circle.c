#include <stdio.h>
#define PI 3.14
int main()
{
    int opn;
    float square, radius;
    printf("Enter RADIUS of the CIRCLE (m)\n");
    scanf("%f", &radius);
    printf("1. AREA\n2. CIRCUMFERENCE\n");
    scanf("%d", &opn);
    switch (opn)
    {
    case 1:
        square = (radius * radius);
        printf("AREA of the circle is %0.2f m square)\n", square * PI);
        break;

    case 2:
        printf("CIRCUMFERENCE of the circle is %0.2f m)\n", ((PI * 2) * radius));
        break;

    default:
        printf("INVALID INPUT!!!");
        break;
    }

    return 0;
}