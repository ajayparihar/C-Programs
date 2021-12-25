#include <stdio.h>

int main()
{
    int num;

    printf("Enter a NUMBER\n");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is a POSITIVE (+Ve) INTEGER\n", num);
    }
    else
    {
        printf("%d is a NEGATIVE (-Ve) INTEGER\n", num);
    }
    return 0;
}