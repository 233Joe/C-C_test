#include "SeqList.h"


void SeqListPrint(SL* ps)
{
	int i = 0;
	for(i=0;i< ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = (int*)malloc(sizeof(int) * 4);
	if(ps->a == NULL)
	{
		printf("内存申请失败");
		exit(-1);
	}
	ps->sz = 0;
	ps->capacity = 4;
}

void SeqListPushBack(SL* ps, int n)
{
	if(ps->sz == ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (int*)realloc(ps->a, sizeof(int) * ps->capacity);
		if(ps->a == NULL)
		{
			printf("内存申请失败");
			exit(-1);
		}
	}
	ps->a[ps->sz] = n;
	ps->sz++;
}

void SeqListPopBack(SL* ps)
{
	if(ps->sz == 0)
	{
		printf("删除失败，没有数据");
		return ;
	}
	ps->sz--;
}

void SeqListPushFront(SL* ps, int n)
{
	if(ps->sz == ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (int*)realloc(ps->a, sizeof(int) * ps->capacity);
		if(ps->a == NULL)
		{
			printf("内存申请失败");
			exit(-1);
		}
	}
	int i = 0;
	for(i = ps->sz;i > 0; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = n;
	ps->sz++;
}

void SeqListPopFront(SL* ps)
{
	if(ps->sz == 0)
	{
		printf("删除失败，没有数据");
		return ;
	}
	ps->sz--;
	int i = 0;
	for(i = 0;i < ps->sz; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
}

void SeqListInsert(SL* ps, int p, int n)
{
	if(p > ps->sz)
	{
		printf("范围超出\n");
		return ;
	}
	if(p == ps->sz)
	{
		SeqListPushBack(ps, n);
		return ;
	}
	else if(p == 1)
	{
		SeqListPushFront(ps, n);
		return ;
	}
	
	if(ps->sz == ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (int*)realloc(ps->a, sizeof(int) * ps->capacity);
		if(ps->a == NULL)
		{
			printf("内存申请失败");
			exit(-1);
		}
	}
	int i = 0;
	for(i = ps->sz;i >= p; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[p-1] = n;
	ps->sz++;
}

void SeqListErase(SL* ps, int p)
{
	if(p > ps->sz || ps->sz == 0)
	{
		printf("范围超出\n");
		return ;
	}
	if(p == ps->sz)
	{
		SeqListPopBack(ps);
		return ;
	}
	else if(p == 1)
	{
		SeqListPopFront(ps);
		return ;
	}

	ps->sz--;
	int i = 0;
	for(i = p-1;i < ps->sz; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
}  
