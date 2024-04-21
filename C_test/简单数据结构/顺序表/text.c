#include "seqList.h"
#include "seqList.c"

int main()
{
	SeqList a;
	SeqListInit(&a);
	
	int i = 0;
	for(i=0;i<=5;i++)
	{
		SeqListPushBack(&a, i);
	}
	SeqListprint(&a);
	SeqListPupBack(&a);
	SeqListPupBack(&a);
	SeqListprint(&a);
	
	for(i=1;i<=5;i++)
	{
		SeqListPushFront(&a, i);
	}
	SeqListprint(&a);
	SeqListPupFront(&a);
	SeqListPupFront(&a);
	SeqListprint(&a);
	
	int x = 0;
	scanf("%d", &x); 
	SeqListInsert(&a, 9, x);
	SeqListprint(&a);
	SeqListErase(&a, x);
	SeqListprint(&a);
	
	int c = SeqListFind(&a, 3);
	if(c != -1)
	{
		printf("找到了 下标是:%d\n", c);
	}
	else
	{
		printf("没找到%d\n", x);
	}
	SeqListDestruction(&a);
	return 0;
}
