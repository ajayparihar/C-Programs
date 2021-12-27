#include <stdio.h>

int main()
{
    int num, sum = 0, rem, temp;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num /= 10;
    }
    if (temp == sum)
    {
        printf("YES, the number %d is a ARMSTRONG NUMBER\n", temp);
    }
    else
    {
        printf("NO, the number %d is NOT a ARMSTRONG NUMBER\n", temp);
    }

    return 0;
}