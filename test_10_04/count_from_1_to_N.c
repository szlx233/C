#include <stdio.h>

#define NUM 100000000

int main()
{
    int i = 1;
    long long int sum = 0;

    for (i = 1; i <= NUM; i++)
    {
        sum += i;
    }

    printf("sum = %lld\n", sum);

    return 0;
}