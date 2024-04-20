#include "seqList.h"

void SeqListInit(SeqList* sq)//初始化
{
//	assert(sq);
	sq->a = (SLD*)malloc(sizeof(SLD)*4);
	if(sq->a == NULL)
	{
		printf("内容申请失败\n");
		exit(-1);
	}
	sq->capacity = 4;
	sq->size = 0;
	printf("初始化成功\n");
}

void SeqListCapacity(SeqList* sq)//增容
{
	if(sq->capacity == sq->size)
	{
		sq->capacity *= 2;
		sq->a = (SLD*)realloc(sq->a, sizeof(SLD)*sq->capacity);
		printf("\t %d %d\n", sq->capacity, (int)sizeof(sq->a));
	}
	
}

void SeqListprint(SeqList* sq)//打印
{
	int i = 0;
	for(i = 0; i<sq->size; i++)
	{
		printf("%d ", sq->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(SeqList* sq, SLD n)//尾插入
{
	SeqListCapacity(sq);
	sq->a[sq->size] = n;
	sq->size++;
}
void SeqListPupBack(SeqList* sq)//尾删除
{
	sq->size--;
}

void SeqListPushFront(SeqList* sq, SLD n)//头插入
{
	SeqListCapacity(sq);
	int i = 0;
	for(i=sq->size; i>0; i--)
	{
		sq->a[i] = sq->a[i-1];
	}
	sq->a[0] = n;
	sq->size++;
}
void SeqListPupFront(SeqList* sq)//头删除
{
	SeqListCapacity(sq);
	int i = 0;
	for(i=0; i<sq->size; i++)
	{
		sq->a[i] = sq->a[i+1];
	}
	sq->size--;
}

void SeqListInsert(SeqList* sq, SLD n, int x)//任意位置插入
{
	SeqListCapacity(sq);
	int i = 0;
	for(i=sq->size; i>x-1; i--)
	{
		sq->a[i] = sq->a[i-1];
	}
	sq->a[x-1] = n;
	sq->size++;
}
void SeqListErase(SeqList* sq, int x)//任意位置删除
{
	SeqListCapacity(sq);
	int i = 0;
	for(i=x-1; i<sq->size; i++)
	{
		sq->a[i] = sq->a[i+1];
	}
	sq->size--;
}
