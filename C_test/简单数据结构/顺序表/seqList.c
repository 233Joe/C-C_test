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

int SeqListFind(SeqList* sq, SLD x)
{
//	assert(sq);
	
	int i = 0;
	for(i=0; i<sq->size; i++)
	{
		if(x == sq->a[i])	return i;
	}

	return -1;
}

void SeqListPushBack(SeqList* sq, SLD n)//尾插入
{
//	SeqListCapacity(sq);
//	sq->a[sq->size] = n;
//	sq->size++;
	
	SeqListInsert(sq, n, sq->size+1);
}
void SeqListPupBack(SeqList* sq)//尾删除
{
	sq->size--;
}

void SeqListPushFront(SeqList* sq, SLD n)//头插入
{
//	SeqListCapacity(sq);
//	int i = 0;
//	for(i=sq->size; i>0; i--)
//	{
//		sq->a[i] = sq->a[i-1];
//	}
//	sq->a[0] = n;
//	sq->size++;
	
	SeqListInsert(sq, n, 1);
}
void SeqListPupFront(SeqList* sq)//头删除
{
//	SeqListCapacity(sq);
//	int i = 0;
//	for(i=0; i<sq->size; i++)
//	{
//		sq->a[i] = sq->a[i+1];
//	}
//	sq->size--;

	SeqListErase(sq, 1);
}

void SeqListInsert(SeqList* sq, SLD n, int x)//任意位置插入
{
	if(x-1 > sq->size && x <= 0)
	{
		return ;
		printf("数据位置有误");
	}
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
	if(x >= sq->size && x <= 0)
	{
		printf("数据位置有误");
		return ;
	}
	SeqListCapacity(sq);
	int i = 0;
	for(i=x-1; i<sq->size; i++)
	{
		sq->a[i] = sq->a[i+1];
	}
	sq->size--;
}

void SeqListDestruction(SeqList* sq)//销毁
{
	free(sq->a);
	sq->a = NULL;
	sq->size = 0;
	sq->capacity = 0;
	printf("销毁成功");
}

