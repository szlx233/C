#include <stdio.h>

int main()
{
        int a =10, b = 20;
        void *t;
        int *pa = &a, *pb = &b;

        t = pa;
        pa = pb;
        pb = t;

        printf("*pa = %d,*pb = %d", *pa, *pb);

    return 0;
}