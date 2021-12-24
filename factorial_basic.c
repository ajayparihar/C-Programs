#include <stdio.h>

int main()
{
    int i, num, fact = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf("Factorial of %d is 1\n", num);
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
            //printf("Hello%d\n",fact);
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
}