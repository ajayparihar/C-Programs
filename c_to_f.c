#include <stdio.h>
#define NF 9 / 5
#define FN 5 / 9

int main()
{
    int temp, opn;
    float ct, tc;
    printf("Enter TEMPERATURE\n");
    scanf("%d", &temp);
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &opn);
    switch (opn)
    {
    case 1:
        ct = (temp * NF) + 32;
        printf("%d Degree Celsius is %0.2f Degree Fahrenheit\n", temp, ct);
        break;

    case 2:
        tc = (temp - 32) * FN;
        printf("%d Degree Fahrenheit is %0.2f Degree Celsius\n", temp, tc);
        break;

    default:
        printf("INVALID INPUT!!!");
        break;
    }

    return 0;
}