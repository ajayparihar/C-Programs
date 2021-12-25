#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter NUMBER 1\n");
    scanf("%d", &num1);

    printf("Enter NUMBER 2\n");
    scanf("%d", &num2);

    if (num1>num2)
    {
        printf("%d is GREATER\n",num1);
    }
    else if(num1==num2)
    {
        printf("%d and %d are EQUAL\n",num1,num2);
    }
    else
    {
        printf("%d is GREATER\n",num2);
    }
    
    
    return 0;
}