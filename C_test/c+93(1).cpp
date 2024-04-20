#include<stdio.h>
#define MAX 1000
int main()
{
	int i;
	float sum=0.0,ave;
	int count;
	int a[MAX];
	printf("请输入小组的人数：");
	scanf("%d",&count);
	printf("请输入小组的学生成绩：");
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<count;i++){
		sum=sum+a[i];
	}
	ave=sum/count;
	printf("该小组学生成绩的总分是%f分/t平均分是%f分/n",sum,ave);
}
