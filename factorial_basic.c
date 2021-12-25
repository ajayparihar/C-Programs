#include <stdio.h>

int main()
{
    int i, num, fact = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
            //printf("Hello%d\n",fact);
        }
        printf("Factorial of %d is %d\n", num, fact);
}