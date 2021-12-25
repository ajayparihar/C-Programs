#include <stdio.h>

int main()
{
    int num1, num2, num3, max1, max;

    printf("Enter NUMBER 1\n");
    scanf("%d", &num1);

    printf("Enter NUMBER 2\n");
    scanf("%d", &num2);

    printf("Enter NUMBER 3\n");
    scanf("%d", &num3);

    max1 = (num1 > num2) ? num1 : num2;
    max = (max1 > num3) ? max1 : num3;
    printf("GREATEST number between %d, %d and %d is:-  %d\n", num1, num2, num3, max);

    return 0;
}