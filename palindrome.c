#include <stdio.h>

int main()
{
    int num, rev = 0, rem, temp;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    if (rev == temp)
    {
        printf("YES, the NUMBER %d is PALINDROME\n", temp);
    }
    else
    {
        printf("NO, the NUMBER %d is NOT PALINDROME\n", temp);
    }
    return 0;
}