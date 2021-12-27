#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2, sqroot, real, imag;

    printf("Enter COEFFICIENT of (x^2)\n");
    scanf("%f", &a);

    printf("Enter COEFFICIENT of (y)\n");
    scanf("%f", &b);

    printf("Enter COEFFICIENT of (z)\n");
    scanf("%f", &c);

    sqroot = sqrt(((b * b) - (4 * a * c)));

    if (sqroot > 0)
    {
        root1 = ((-b) + sqroot) / (2 * a);
        root2 = ((-b) - sqroot) / (2 * a);

        printf("ROOT 1 of the EQUATION %0.2f x^2+ %0.2f y+ %0.2f z is  %0.2f\n", a, b, c, root1);
        printf("ROOT 2 of the EQUATION %0.2f x^2+ %0.2f y+ %0.2f z is  %0.2f\n", a, b, c, root2);
    }
    else if (sqroot == 0)
    {
        root1 = root2 = (-b) / (2 * a);

        printf("ROOT 1 and ROOT 2 of the EQUATION %0.2f x^2+ %0.2f y+ %0.2f z is  %0.2f\n", a, b, c, root1);
    }
    else
    {
        real = (-b) / (2 * a);
        imag = sqrt(-sqroot) / (2 * a);

        printf("ROOT 1 of the EQUATION %0.2f x^2+ %0.2f y+ %0.2f z is  %0.2f+%0.2fi\n", a, b, c, real, imag);
        printf("ROOT 2 of the EQUATION %0.2f x^2+ %0.2f y+ %0.2f z is  %0.2f-%0.2fi\n", a, b, c, real, imag);
    }

    return 0;
}