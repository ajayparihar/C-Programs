#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter ANGLE 1 of TRIANGLE\n");
    scanf("%d", &side1);

    printf("Enter ANGLE 2 of TRIANGLE\n");
    scanf("%d", &side2);

    printf("Enter ANGLE 2 of TRIANGLE\n");
    scanf("%d", &side3);

    if (((side1 + side2) > side3) && ((side2 + side3 > side1)) && ((side3 + side1) > side2))
    {
        printf("The TRIANGLE with SIDE %d, %d and %d is VALID\n", side1, side2, side3);
    }
    else
    {
        printf("The TRIANGLE with SIDE %d, %d and %d is INVALID!!!\n", side1, side2, side3);
    }

    return 0;
}