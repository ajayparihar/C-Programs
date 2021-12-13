#include <stdio.h>

int main()
{
int num,i=1,sum;
printf("Enter The NUMBER\n");
scanf("%d",&num);
do{
    sum=i*num;
    printf("%d\n",sum);
    i=i+1;
}while (i<=10);

    return 0;
}