#include <stdio.h>
#define PI 3.14159

int main()
{
    int dia, height, opn;
    float radius, volume, lsa, csa;
    printf("Enter the DIAMETER of CYLINDER\n");
    scanf("%d", &dia);

    printf("Enter the HEIGHT of CYLINDER\n");
    scanf("%d", &height);

    printf("Enter 1 for RADIUS\nEnter 2 for VOLUME\nEnter 3 for LATERAL SURFACE AREA\nEnter 4 for CURVED SURFACE AREA\n");
    scanf("%d", &opn);

    radius = dia / 2;

    switch (opn)

    {
    case 1:
        printf("RADIUS is %0.2f\n", radius);
        break;

    case 2:
        volume = ((PI) * (radius * radius) * height);
        printf("VOLUME of CYLINDER with %d DIAMETER and %d HEIGHT is %0.2f\n", dia, height, volume);
        break;

    case 3:
        lsa = (2 * PI * radius) * height;
        printf("LATERAL SURFACE AREA of CYLINDER with %d DIAMETER and %d HEIGHT is %0.2f\n", dia, height, lsa);
        break;

    case 4:
        csa = (2 * PI * radius) * (height + radius);
        printf("CURVED SURFACE AREA of CYLINDER %d DIAMETER and %d HEIGHT is %0.2f\n", dia, height, csa);
        break;

    default:
        printf("INVALID INPUT!!!\n");
        break;
    }

    return 0;
}