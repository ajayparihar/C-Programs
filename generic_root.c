#include <stdio.h>

int main()
{
    int num, sum = 0, rem, temp;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }
    printf("GENERIC ROOT of %d is %d\n", temp, sum);
    return 0;
}