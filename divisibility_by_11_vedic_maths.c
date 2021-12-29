#include <stdio.h>

int main()
{
    int num, esum = 0, osum = 0, rem, temp;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        osum = 0;
        num /= 10;
    }

    while (num != 0)
    {
        rem = num % 10;
        esum = 0;
        num /= 10;
    }

    if ((osum - esum) == 0 || (osum - esum) == 11)
    {
        printf("Number %d is DIVISIBLE by 11\n", temp);
    }
    else
    {
        printf("Number %d is NOT DIVISIBLE by 11\n", temp);
    }

    return 0;
}