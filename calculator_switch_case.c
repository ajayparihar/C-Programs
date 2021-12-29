#include <stdio.h>

int main()
{
    float num1, num2;
    int opr;
    printf("Enter a FIRST NUMBER\n");
    scanf("%f", &num1);
    printf("Enter a SECOND NUMBER\n");
    scanf("%f", &num2);

    printf("Enter 1 to ADD(+)\nEnter 2 to SUBTRACT(-)\nEnter 3 to MULTIPLY(*)\nEnter 4 to DIVIDE(/)\n");
    scanf("%d", &opr);

    switch (opr)
    {
    case 1:
        printf("%0.2f + %0.2f is %0.2f\n", num1, num2, (num1 + num2));
        break;
    case 2:
        printf("%0.2f - %0.2f is %0.2f\n", num1, num2, (num1 - num2));
        break;
    case 3:
        printf("%0.2f * %0.2f is %0.2f\n", num1, num2, (num1 * num2));
        break;
    case 4:
        printf("%0.2f / %0.2f is %0.2f\n", num1, num2, (num1 / num2));
        break;

    default:
        break;
    }

    return 0;
}