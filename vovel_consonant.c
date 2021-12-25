#include <stdio.h>

int main()
{
    char c;
    printf("Enter a CHARACTER\n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("The CHARACTER %c is a VOVEL\n", c);
    }
    else
    {
        printf("The CHARACTER %c is a CONSONANT\n", c);
    }

    return 0;
}