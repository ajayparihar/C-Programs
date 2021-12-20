#include <stdio.h>

int fib(int num)
{
    if (num == 0 || num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return ((fib(num - 1)) + (fib(num - 2)));
    }

    return 0;
}
int main()
{
    int number;
    printf("Enter the position of FIBONACCI series\n");
    scanf("%d", &number);
    printf("%d", fib(number));
    return 0;
}