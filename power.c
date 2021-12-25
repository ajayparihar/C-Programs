#include <stdio.h>

int main()
{
    int num,square,cube;
    printf("Enter an INTEGER\n");
    scanf("%d",&num);
    square=num*num;
    cube= square*num;
    printf("%d to the POWER 1 is %d\n%d to the POWER 2 is %d\n%d to the POWER 3 is %d\n",num,num,num,square,num,cube);
    return 0;
}