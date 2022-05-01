#include <stdio.h>

int main()
{
    int num;


    scanf("%d", &num);

    int num_integer = (int)num;
    int num_decimal = num - num_integer;

    printf("%d\n", num_integer);

    return 0;
}
