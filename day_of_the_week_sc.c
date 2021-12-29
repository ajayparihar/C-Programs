#include <stdio.h>

int main()
{
    int day;
    printf("Enter 1 for MONDAY\nEnter 2 for TUESDAY\nEnter 3 for WEDNESDAY\nEnter 4 for THURSDAY\nEnter 5 for FRIDAY\nEnter 6 for SATURDAY\nEnter 7 for SUNDAY\n");

    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("TODAY is MONDAY\n");
        break;

    case 2:
        printf("TODAY is TUESDAY\n");
        break;

    case 3:
        printf("TODAY is WEDNESDAY\n");
        break;

    case 4:
        printf("TODAY is THURSDAY\n");
        break;

    case 5:
        printf("TODAY is FRIDAY\n");
        break;

    case 6:
        printf("TODAY is SATURDAY\n");
        break;

    case 7:
        printf("TODAY is SUNDAY\n");
        break;

    default:
        printf("INVALID INPUT!!!\n");
        break;
    }
    return 0;
}