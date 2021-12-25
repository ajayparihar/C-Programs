#include <stdio.h>

int main()
{
    char c;
    printf("Enter a CHARACTER\n");
    scanf("%c", &c);
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            printf("The CHARACTER %c is a VOVEL\n", c);
        }
        else
        {
            printf("The CHARACTER %c is a CONSONANT\n", c);
        }
    }
    else
    {
        printf("%c Is an INVALID INPUT\n", c);
    }

    return 0;
}