#include "SeqList.h"
#include "SeqList.c"

void TextSeqList1()
{
	SL ps;
	SeqListInit(&ps);
	SeqListPushBack(&ps, 2);
	SeqListPushBack(&ps, 3);
	SeqListPushBack(&ps, 4);
	SeqListPushBack(&ps, 5);
	SeqListPushBack(&ps, 6);
	SeqListPopBack(&ps);
	SeqListPopBack(&ps);
	SeqListPrint(&ps);
	printf("%d %d \n", ps.sz, ps.capacity);
	
	SeqListPushFront(&ps, 1);
	SeqListPushFront(&ps, -1);
	SeqListPushFront(&ps, -2);
	SeqListPrint(&ps);
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPrint(&ps);
	
	SeqListInsert(&ps, 3, 2);
	SeqListPrint(&ps);
		printf("%d %d \n", ps.sz, ps.capacity);
	SeqListErase(&ps, 4);
	SeqListPrint(&ps);
		printf("%d %d \n", ps.sz, ps.capacity);
}

int main()
{
	TextSeqList1();

	return 0;
}
