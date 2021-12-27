#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, p_per, l_per;
    char per = '%';

    printf("Enter the COST PRICE of the PRODUCT\n");
    scanf("%f", &cp);

    printf("Enter the SELLING PRICE of the PRODUCT\n");
    scanf("%f", &sp);

    profit = sp - cp;
    loss = cp - sp;

    p_per = (profit / cp) * 100;
    l_per = (loss / cp) * 100;

    if (sp > cp)
    {
        printf("Product is in PROFIT of %0.2f and PROFIT PERCENTAGE is %0.2f%c\n", profit, p_per, per);
    }
    else
    {
        printf("Product is in LOSS of %0.2f and LOSS PERCENTAGE is %0.2f%c\n", loss, l_per, per);
    }

    return 0;
}