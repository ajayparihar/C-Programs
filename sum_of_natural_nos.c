#include <stdio.h>

int main()
{
    int lim, sum = 0, temp;
    printf("Enter the LIMIT\n");
    scanf("%d", &lim);
    temp = lim;

    while (lim > 0)
    {
        sum = sum + lim;
        lim--;
    }
    printf("SUM of first %d NATURAL numbers are %d\n", temp, sum);
    return 0;
}