#include <stdio.h>

#define NUM 3

int main()
{
	int i,sum;
	int a[NUM];
	
	for (i=0;i<NUM;i++)
	{
		printf("�������%d��ѧ���ĳɼ���",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	for (i=0;i<NUM;i++)
	{
		printf("��%d���ɼ��ǣ�%d\n",i+1,a[i]);
	}
	printf("�ôο���ƽ����Ϊ��%.2f��\n",(float)sum/NUM);
	printf("%d\n",sizeof a);
}
