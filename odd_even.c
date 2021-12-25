#include <stdio.h>

int main()
{
    int num;

    printf("Enter a NUMBER\n");
    scanf("%d", &num);
    if ((num % 2) == 0)
    {
        printf("%d is an EVEN NUMBER\n", num);
    }
    else
    {
        printf("%d is an ODD NUMBER\n", num);
    }
    return 0;
}