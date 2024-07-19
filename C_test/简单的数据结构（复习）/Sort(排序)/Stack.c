#include "Sort.h"
#include "Stack.h"

//初始化
void StackInit(Stack* pst)
{
	assert(pst);
	pst->_top = 0;
	pst->_capacity = 4;
	
	pst->_a = (STDataType*)malloc(sizeof(STDataType)*pst->_capacity);
	if(pst->_a == NULL)
	{
		printf("内存申请失败\n");
		exit(-1);
	}
}

//销毁
void StackDestory(Stack* pst)
{
	assert(pst);
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}

//进栈
void StackPush(Stack* pst, int x)
{
	assert(pst);
	if(pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;
		STDataType* tmp = (STDataType*)realloc(pst->_a, sizeof(STDataType)*pst->_capacity);
		if(tmp == NULL)
		{
			printf("tmp内存申请失败\n");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}

//出栈
void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	pst->_top--;
}

//返回数据个数
int StackSize(Stack* pst)
{
	assert(pst);
	return pst->_top;
}

//返回栈顶数据
STDataType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	return pst->_a[pst->_top-1];
}

//判断栈是否为空 0非空 1空
int  StackEmpty(Stack* pst)
{
	assert(pst);
	return pst->_top > 0 ? 0 : 1;
}
