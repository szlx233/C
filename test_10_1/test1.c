#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Oringinal string";
    char b[20];

    strncpy(b, a, 6);
    b[6] = '\0';

    printf("%s\n", b);

    return 0;
}