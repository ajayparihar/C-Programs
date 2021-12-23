#include <stdio.h>

int main()
{
    float si;
    char per='%';
    int amt, year, rate;

    printf("Enter the AMOUNT\n");
    scanf("%d", &amt);

    printf("Enter YEAR\n");
    scanf("%d", &year);

    printf("Enter the RATE of INTEREST\n");
    scanf("%d", &rate);

    si = ((amt * year * rate) / 100);
    printf("SIMPLE INTEREST of %d Rupees, in %d YEAR(s), at the RATE of %d%c is %0.2f\n",amt,year,rate,per,si);
    return 0;
}