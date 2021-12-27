#include <stdio.h>

int main()
{
    int num, rev = 0, rem;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    printf("REVERSE NUMBER is %d\n", rev);
    return 0;
}