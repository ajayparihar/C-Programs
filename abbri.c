#include <stdio.h>
#include <string.h>

int main()
{
    char *fname[10], *lname[10];
    printf("Enter FIRST name\n");
    scanf("%s", &fname);

    printf("Enter LAST name\n");
    scanf("%s", &lname);

    printf("Abbrivation of %s %s is %c.%c", fname, lname, fname[0], lname[0]);

    return 0;
}