//这是一个指针学习代码

#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'C';

    int *pa = &a;
    char *pb = &b;

    *pa = 20;
    *pb = 'A';

    printf("%d\n", *pa);
    printf("%c\n", *pb);

    return 0;
}
