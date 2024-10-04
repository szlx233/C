#include <stdio.h>
#include <string.h>

void tts(void);


void tts(void)
{
    printf("Hello World\n");
}


int main()
{
    char a[] = "Oringinal string";
    char b[20];

    strncpy(b, a, 6);
    b[6] = '\0';

    printf("%s\n", b);

    return 0;
}