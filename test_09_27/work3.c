#include <stdio.h>
#include <stdbool.h>

int main()
{
        int i, j, n, count, cubed, sum = 0;
        bool result = true; // ���ڴ����֤���
        char answer;

        printf("������һ��������");
        scanf("%d", &count);

        int array[count + 1][4];
        // �䳤�����޷��ٶ����ǳ�ʼ����ֻ���ֶ���...
        for (n = 3; n <= count; n++)
        {
               // ��ʼ����һ�У���Ϊ���������֤ 
               array[n][0] = 0; 
        }

        for (n = 3; n <= count; n++)
        {
                cubed = n * n * n;
                for (i = 1; i < cubed; i += 2)
                {
                        for (j = i; j < cubed; j += 2)
                        {
                                sum += j;
                                if (sum == cubed)
                                {
                                        array[n][0] = cubed;
                                        array[n][1] = i;
                                        array[n][2] = i + 2;
                                        array[n][3] = j;
                                        
                                        goto FINDIT;
                                }

                                if (sum > cubed)
                                {
                                        sum = 0;
                                        break;
                                }
                        }
                }

        FINDIT:
                sum = 0;
        }

        // ���
        for (n = 3; n <= count; n++)
        {
                if (array[n][0] == 0)
                {
                        result = false;
                        break;
                }
        }
        
        if (result)
        {
                printf("����֤��3 ~ %d ֮�����е�������������Ƴ�˹����\n\n", count);
                printf("�Ƿ��ӡ����ʽ��(y/n)��");
                getchar();
                scanf("%c", &answer);
        }
        else
        {
                printf("��֤ʧ�ܣ����� %d �޷��ҵ���Ӧ������������\n");
        }

        if (answer == 'y')
        {
                // ��ӡ
                for (n = 3; n <= count; n++)
                {
                        if (array[n][3] - array[n][1] > 4)
                        {
                                printf("%d^3 == %d == %d + %d +... + %d\n", n, array[n][0], array[n][1], array[n][2], array[n][3]);
                        }
                        else
                        {
                                printf("%d^3 == %d == %d + %d + %d\n", n, array[n][0], array[n][1], array[n][2], array[n][3]);
                        }
                }
        }

        return 0;
}