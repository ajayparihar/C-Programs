#include <stdio.h>

int main()
{
    int num, star, space, pick;
    printf("Enter a Number\n");
    scanf("%d", &num);
    printf("Press 0 to print TRIANGULAR Pattern\nPress 1 to print REVERSE TRIANGULAR Pattern\n");
    scanf("%d", &pick);
    switch (pick)
    {
    case 0:
        for (star = 0; star < num; star++)
        {
            for (space = 0; space < star + 1; space++)
            {
                printf("*");
            }

            printf("\n");
        }

        break;

    case 1:
        for (star = 0; star < num; star++)
        {
            for (space = 0; space <= num - star - 1; space++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;

    default:
        printf("Invalid INPUT");
        break;
    }
    return 0;
}