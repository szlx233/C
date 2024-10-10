#include <stdio.h>

int main()
{
    int score[5][6] = {0};
    int i,j;
    
    for (i=0;i<5;i++)
    {
        for (j=0;j<6;j++)
        {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}