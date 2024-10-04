#include <stdio.h>

int main()
{
    float a = 1.0;
    int i;

    for (i = 0; i < 10; i++)
    {
        a += 0.1;
        printf("%d %.20f\n", i, a);
    }

    return 0;
}