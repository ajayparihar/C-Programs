#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter SIDE 1 of the TRIANGLE\n");
    scanf("%d", &side1);

    printf("Enter SIDE 2 of the TRIANGLE\n");
    scanf("%d", &side2);

    printf("Enter SIDE 2 of the TRIANGLE\n");
    scanf("%d", &side3);

    if (((side1 + side2) > side3) && ((side2 + side3 > side1)) && ((side3 + side1) > side2))
    {
        if (side1 == side2 == side3)
        {
            printf("The TRIANGLE with SIDES %d, %d and %d is an EQUILATERAL TRIANGLE!!!\n", side1, side2, side3);
        }

        else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
        {
            printf("The TRIANGLE with SIDES %d, %d and %d is an ISOCELES TRIANGLE!!!\n", side1, side2, side3);
        }

        else if (side1 != side2 != side3)
        {
            printf("The TRIANGLE with SIDES %d, %d and %d is an SCALENE TRIANGLE!!!\n", side1, side2, side3);
        }
    }
    else
    {
        printf("The TRIANGLE with SIDES %d, %d and %d is INVALID!!!\n", side1, side2, side3);
    }

    return 0;
}