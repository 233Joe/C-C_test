#include"Stack.h"

void StackInit(Stack* pst)//初始化
{
	if(!pst)
		return ;
	pst->_a = (int*)malloc(sizeof(int)*4);
	pst->_capacity = 4;
	pst->_top = 0;
}

void StackDestruction(Stack* pst)//销毁
{
	if(!pst)
		return ;

	free(pst->_a);
	pst->_a = NULL;
	pst->_top = 0;
	pst->_capacity = 0;
}

void StackPush(Stack* pst, int x)//添加
{
	if(!pst)
		return ;
	
	if(pst->_capacity == pst->_top)
	{
		pst->_a = (int*)realloc(pst->_a, sizeof(*pst->_a)*2);
		pst->_capacity *= 2;
	}
	
	if(pst->_a != NULL)
	{
		pst->_a[pst->_top] = x;
		pst->_top++;
	}
	else
		exit(-1);

}

void StackPop(Stack* pst)//删除
{
	if(!pst)
		return ;	
	
	if(pst->_top > 0)
		pst->_top--;
	
}

int StackSize(Stack* pst)//统计大小
{
	if(!pst)
		return -1;
	
	return pst->_top;
}

int StackEmpty(Stack* pst)//空返回1
{
	if(!pst)
		return -1;
	
	return pst->_top == 0 ? 1 : 0;
}

int StackTop(Stack* pst)//返回栈顶的数据
{
	if(!pst)
		return -1;
	
	if(pst->_top > 0)
		return pst->_a[pst->_top-1];
	return -1;
}
