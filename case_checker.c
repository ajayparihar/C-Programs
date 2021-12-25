#include <stdio.h>

int main()
{
    char c;
    printf("Enter a CHARACTER\n");
    scanf("%c", &c);
    printf("Enter a\n");
    if (c >= 'a' && c <= 'z')
    {
        printf("CHARACTER %c is in LOWERCASE\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("CHARACTER %c is in UPPERCASE\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("CHARACTER %c is a DIGIT\n", c);
    }
    else
    {
        printf("CHARACTER %c is a SPECIAL CHARACTER\n", c);
    }

    return 0;
}