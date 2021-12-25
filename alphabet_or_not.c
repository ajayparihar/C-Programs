#include <stdio.h>

int main()
{
    char c;
    printf("Enter a CHARACTER\n");
    scanf("%c", &c);

    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        printf("%c is ALPHABET", c);
    }
    else
    {
        printf("%c is not an ALPHABET", c);
    }

    return 0;
}