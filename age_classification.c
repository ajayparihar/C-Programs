#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age!\n");
    scanf("%d",&age);
    printf("Your age is %d ",age);

    if (age<=2)
    {
        printf("and you are a BABY");
    }

    else if (age>=3 && age<=16)
    {
    printf("and you are a CHILD");
    }

    else if (age>=17 && age<=30)
    {
    printf("and you are a YOUNG ADULT");
    }

    else if (age>=31 && age<=45)
    {
    printf("and you are a MIDDLE-AGE ADULT");
    }

    else
    {
        printf("and you are an OLD ADULT");
    }
    return 0;
}