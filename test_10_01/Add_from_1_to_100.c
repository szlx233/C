#include <stdio.h>

int main()
{
    int i, sum = 0;

    printf("sum = %d\ni = %d\n", sum, i);
    for (i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("�ӷ�����ǣ�%d", sum);

    return 0;
}