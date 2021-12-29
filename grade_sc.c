#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your GRADE POINT (0-10)\n");
    scanf("%d", &grade);

    switch (grade)

    {
    case 10:
        printf("LETTER GRADE for %d GRADE POINT is 'O'\n", grade);
        break;
    case 9:
        printf("LETTER GRADE for %d GRADE POINT is 'A'\n", grade);
        break;
    case 8:
        printf("LETTER GRADE for %d GRADE POINT is 'B'\n", grade);
        break;
    case 7:
        printf("LETTER GRADE for %d GRADE POINT is 'C'\n", grade);
        break;
    case 6:
        printf("LETTER GRADE for %d GRADE POINT is 'D'\n", grade);
        break;
    case 5:
        printf("LETTER GRADE for %d GRADE POINT is 'E'\n", grade);
        break;
    case 4:
        printf("LETTER GRADE for %d GRADE POINT is 'P'\n", grade);
        break;
    case 0:
        printf("LETTER GRADE for %d GRADE POINT is 'F'\n", grade);
        break;

    default:
        printf("INVALID INPUT!!!\n");
        break;
    }

    return 0;
}