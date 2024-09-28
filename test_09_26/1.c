#include <stdio.h>

#define NUM 3

int main()
{
	int i,sum;
	int a[NUM];
	
	for (i=0;i<NUM;i++)
	{
		printf("请输入第%d名学生的成绩：",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	for (i=0;i<NUM;i++)
	{
		printf("第%d名成绩是：%d\n",i+1,a[i]);
	}
	printf("该次考试平均分为：%.2f分\n",(float)sum/NUM);
	printf("%d\n",sizeof a);
}
