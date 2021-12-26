#include <stdio.h>

int main()
{
    int year;
    printf("Enter YEAR (yyyy)\n");
    scanf("%d", &year);
    int printLen(int year);
        if ((year % 4) == 0)
        {
            printf("Year %d is a LEAP YEAR\n", year);
        }
        else
        {
            printf("Year %d is NOT a LEAP YEAR\n", year);
        }
    return 0;
}