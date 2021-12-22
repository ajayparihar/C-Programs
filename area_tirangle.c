#include <stdio.h>

int main()
{
    float height, base;
    printf("Enter HEIGHT of the TRIANGLE (m)\n");
    scanf("%f", &height);

    printf("Enter BASE of the TRIANGLE (m)\n");
    scanf("%f", &base);
    printf("AREA of TRIANGLE is %0.2f m square", ((base * height) / 2));

    return 0;
}