#include <stdio.h>

int main()
{
    int hindi, english, maths, science, computer_science;
    float per;
    char per_sign='%';

    printf("Enter the MARKS of HINDI\n");
    scanf("%d", &hindi);

    printf("Enter the MARKS of ENGLISH\n");
    scanf("%d", &english);

    printf("Enter the MARKS of MATHS\n");
    scanf("%d", &maths);

    printf("Enter the MARKS of SCIENCE\n");
    scanf("%d", &science);

    printf("Enter the MARKS of COMPUTER SCIENCE\n");
    scanf("%d", &computer_science);
    per= (hindi+english+maths+science+computer_science)/5;
    printf("The PERCENTAGE is %0.2f%c\n",per,per_sign);
    return 0;
}