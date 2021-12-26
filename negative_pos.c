#include <stdio.h>

int main()
{
    int num;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("NUMBER %d is a NEGATIVE(-) Number\n", num);
    }
    else if (num == 0)
    {
        printf("NUMBER is ZERO\n");
    }
    else
    {
        printf("NUMBER %d is a POSITIVE(+) Number\n", num);
    }

    return 0;
}