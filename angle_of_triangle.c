#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter ANGLE 1 of TRIANGLE\n");
    scanf("%d", &angle1);

    printf("Enter ANGLE 2 of TRIANGLE\n");
    scanf("%d", &angle2);

    printf("Enter ANGLE 2 of TRIANGLE\n");
    scanf("%d", &angle3);
    sum = (angle1 + angle2) + angle3;
    if (sum == 180)
    {
        printf("The TRIANGLE with ANGLE %d, %d and %d is VALID\n", angle1, angle2, angle3);
    }
    else
    {
        printf("The TRIANGLE with ANGLE %d, %d and %d is INVALID!!!\n", angle1, angle2, angle3);
    }

    return 0;
}