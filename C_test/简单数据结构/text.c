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
	SeqListInsert(&a, x, 2);
	SeqListprint(&a);
	SeqListErase(&a, 3);
	SeqListprint(&a);
	return 0;
}
