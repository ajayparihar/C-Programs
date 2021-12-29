#include <stdio.h>

int main()
{
    int month;
    printf("Enter 1 for JANUARY\nEnter 2 for FEBRUARY\nEnter 3 for MARCH\nEnter 4 for APRIL\nEnter 5 for MAY\nEnter 6 for JUNE\nEnter 7 for JULY\nEnter 8 for AUGUST\nEnter 9 for SEPTEMBER\nEnter 10 for OCTOBER\nEnter 11 for NOVEMBER\nEnter 12 for DECEMBER\n");

    scanf("%d", &month);

    switch (month)
    {
    case 2:
        printf("FEBRUARY has 28/ 29 DAYS\n", month);
        break;

    case 1:
        printf("JANUARY has 31 DAYS\n", month);
        break;

    case 3:
        printf("MARCH has 31 DAYS\n", month);
        break;

    case 5:
        printf("MAY has 31 DAYS\n", month);
        break;

    case 7:
        printf("JULY has 31 DAYS\n", month);
        break;

    case 8:
        printf("AUGUST has 31 DAYS\n", month);
        break;

    case 10:
        printf("OCTOBER has 31 DAYS\n", month);
        break;

    case 12:
        printf("DECEMBER has 31 DAYS\n", month);
        break;

    case 4:
        printf("APRIL has 30 DAYS\n", month);
        break;

    case 6:
        printf("JUNE has 30 DAYS\n", month);
        break;

    case 9:
        printf("SEPTEMBER has 30 DAYS\n", month);
        break;

    case 11:
        printf("NOVEMBER has 30 DAYS\n", month);
        break;

    default:
        printf("INVALID INPUT!!!\n");
        break;
    }
    return 0;
}