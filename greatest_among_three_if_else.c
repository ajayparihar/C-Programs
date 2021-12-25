#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter NUMBER 1\n");
    scanf("%d", &num1);

    printf("Enter NUMBER 2\n");
    scanf("%d", &num2);

    printf("Enter NUMBER 3\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("GREATEST number between %d, %d and %d is:-  %d\n", num1, num2, num3, num1);
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("GREATEST number between %d, %d and %d is:-  %d\n", num1, num2, num3, num2);
    }

    else if (num1 == num2 && num1 == num3)
    {
        printf("All NUMBERS are EQUAL to %d\n",num1);
    }

    else if (num1 == num2)
    {
        if (num1 > num3)
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num1, num1, num2, num3, num1);
        else
        {
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num1, num1, num2, num3, num3);
        }
    }

    else if (num2 == num3)
    {
        if (num1 > num2)
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num2, num1, num2, num3, num1);
        else
        {
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num2, num1, num2, num3, num2);
        }
    }

    else if (num3 == num1)
    {
        if (num3 > num2)
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num3, num1, num2, num3, num3);
        else
        {
            printf("TWO numbers are EQUAL to %d and GRATEST NUMBER among %d, %d and %d is %d\n", num3, num1, num2, num3, num2);
        }
    }

    else if (num3 > num2 && num3 > num1)
    {
        printf("GREATEST number between %d, %d and %d is:-  %d\n", num1, num2, num3, num3);
    }
    return 0;
}