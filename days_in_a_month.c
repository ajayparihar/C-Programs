#include <stdio.h>

int main()
{
    int month;
    printf("Enter MONTH (MM)\n");
    scanf("%d", &month);
    if ((month > 0) && (month <= 12))
    {

        if ((month == 2))
        {
            printf("MONTH %d has 28/ 29 DAYS\n", month);
        }

        // months with 31 days

        if (((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)))
        {
            printf("MONTH %d has 31 DAYS\n", month);
        }

        // months with 30 days

        if (((month == 4) || (month == 6) || (month == 9) || (month == 11)))
        {
            printf("MONTH %d has 30 DAYS\n", month);
        }
    }
    else
    {
        printf("INVALID INPUT!!!\n");
    }

    return 0;
}