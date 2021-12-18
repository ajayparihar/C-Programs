#include <stdio.h>

int main()
{
    float ans, val;
    int opr;
    printf("Enter the VALUE to be CONVERTED\n");
    scanf("%f", &val);
    printf("Enter 1 to m->cm\nEnter 2 to km->mile\nEnter 3 to inche->foot\nEnter 4 to cm->inch\nEnter 5 to pound->kg\n");
    scanf("%d", &opr);
    switch (opr)
    {
    case 1:
        ans = val * 100;
        printf("%f m(s) is %f cm(s)", val, ans);
        break;

    case 2:
        ans = val * 0.621371;
        printf("%f km(s) is %f mile(s)", val, ans);
        break;

    case 3:
        ans = val * 0.0833333;
        printf("%f inch(s) is %f foot(s)", val, ans);
        break;

    case 4:
        ans = val * 0.393701;
        printf("%f cm(s) is %f inch(s)", val, ans);
        break;

    case 5:
        ans = val * 0.453592;
        printf("%f pound(s) is %f kg(s)", val, ans);
        break;
    default:
        printf("Invalid INPUT...Please enter a number between 1 to 5\n");
        break;
    }
    return 0;
}