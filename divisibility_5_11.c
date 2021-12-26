#include <stdio.h>

int main()
{
    int num;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);

    if (((num % 5) == 0) && ((num % 11) != 0))
    {
        printf("NUMBER %d is DIVISIBLE by 5 ONLY\n", num);
    }

    else if (((num % 11) == 0) && ((num % 5) != 0))
    {
        printf("NUMBER %d is DIVISIBLE by 11 ONLY\n", num);
    }

    else if (((num % 5) == 0) && ((num % 11) == 0))
    {
        printf("NUMBER %d is DIVISIBLE by 5 and 11 BOTH\n", num);
    }
    else
    {
        printf("NUMBER %d is NOT DIVISIBLE by 5 and 11 BOTH\n", num);
    }

    return 0;
}