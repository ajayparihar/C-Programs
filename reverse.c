#include <stdio.h>

int main()
{
    int num, rev = 0, rem,temp;
    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    temp=num;

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    printf("REVERSE of the NUMBER %d is %d\n",temp, rev);
    return 0;
}