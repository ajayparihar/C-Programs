#include <stdio.h>
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}
int main()
{
    int number;
    printf("Enter a NUMBER\n");
    scanf("%d", &number);
    printf("%d", fact(number));
    return 0;
}