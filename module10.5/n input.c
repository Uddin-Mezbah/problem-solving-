#include <stdio.h>
int main()
{
    // No negative value is allow for years
    int years;
    scanf("%d",&years);
    if (years <= 0)
    {
        printf("0 and negative is not allow for a years\n");
    }
    // If years is between 1 to 100 it
    // will come in 1st century
    else if (years <= 100)
    {
        printf("\n");
    }
    else if (years % 100 == 0)
    {
        printf("%d%",years/ 100, " century");
    }
    else
    {
        printf("%d%",years/ 100 +1, " century");
    }
}
