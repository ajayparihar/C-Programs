#include <stdio.h>

int main()
{
    int num1, num2, max;
    printf("Enter FIRST NUMBER\n");
    scanf("%d", &num1);

    printf("Enter SECOND NUMBER\n");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;
    printf("value of max %d\n",max);
    while (1)//(1- true, 0- false)
    {
        if (max % num1 == 0 && max % num2 == 0)//(checks wheather max is divided by both the numbers.)
        {
            printf("The LCM of %d and %d is:- %d", num1, num2, max);
            break;
        }
        ++max;//(if not then max value will be incremented by 1, then again 'if' will run.)
    }

    return 0;
}