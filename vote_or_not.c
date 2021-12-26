#include <stdio.h>

int main()
{
    int age;
    printf("Enter your AGE\n");
    scanf("%d", &age);

    if ((age > 0) && (age <= 123))
    {
        if (age < 18)
        {
            printf("You are %d Year(s) old and NOT ELIGIBLE to VOTE\n", age);
        }
        else
        {
            printf("You are %d Year(s) old and ELIGIBLE to VOTE\n", age);
        }
    }
    else
    {
        printf("AGE INVALID!!!\n");
    }

    return 0;
}