#include <stdio.h>

int main()
{
    int date, month, year;
    printf("Enter DATE (DD)\n");
    scanf("%d", &date);

    printf("Enter MONTH (MM)\n");
    scanf("%d", &month);

    printf("Enter YEAR (YYYY)\n");
    scanf("%d", &year);

    // Leap Year
    if ((year >= -9999 && year <= 9999))
    {
        if ((month == 2))
        {
            if (((year % 4) == 0) && (date > 0) && (date <= 29))
            {
                printf("Entered DATE (%d/%d/%d) is CORRECT\n", date, month, year);
            }
            else if ((date > 0) && (date <= 28))
            {
                printf("Entered DATE (%d/%d/%d) is CORRECT\n", date, month, year);
            }
            else
            {
                printf("Entered DATE (%d/%d/%d) is INCORRECT\n", date, month, year);
            }
        }

        // months with 31 days
        if (((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)))
        {
            if ((date > 0) && (date <= 31))
            {
                printf("Entered DATE (%d/%d/%d) is CORRECT\n", date, month, year);
            }
            else
            {
                printf("Entered DATE (%d/%d/%d) is INCORRECT\n", date, month, year);
            }
        }

        // months with 30 days
        if (((month == 4) || (month == 6) || (month == 9) || (month == 11)))
        {
            if ((date > 0) && (date <= 30))
            {
                printf("Entered DATE (%d/%d/%d) is CORRECT\n", date, month, year);
            }
            else
            {
                printf("Entered DATE (%d/%d/%d) is INCORRECT\n", date, month, year);
            }
        }
    }
    else
    {
        printf("Entered DATE (%d/%d/%d) is INCORRECT\n", date, month, year);
    }

    return 0;
}