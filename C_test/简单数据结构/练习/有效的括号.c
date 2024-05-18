#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef char StackPointerType;
typedef struct Stack
{
	StackPointerType* _a;
	int _capacity;
	int _top;
}Stack;

void StackInit(Stack* pst);//初始化

void StackDestruction(Stack* pst);//销毁

void StackPush(Stack* pst, StackPointerType x);//添加

void StackPop(Stack* pst);//删除

int StackSize(Stack* pst);//统计大小

int StackEmpty(Stack* pst);//空返回1

StackPointerType StackTop(Stack* pst);//返回栈顶的数据

void StackInit(Stack* pst)//初始化
{
	if(!pst)
		return ;
	pst->_a = (StackPointerType*)malloc(sizeof(StackPointerType)*4);
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

void StackPush(Stack* pst, StackPointerType x)//添加
{
	if(!pst)
		return ;
	
	if(pst->_capacity == pst->_top)
	{
		pst->_a = (StackPointerType*)realloc(pst->_a, sizeof(*pst->_a)*2);
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

StackPointerType StackTop(Stack* pst)//返回栈顶的数据
{
	if(!pst)
		return -1;
	
	if(pst->_top > 0)
		return pst->_a[pst->_top-1];
	return -1;
}
bool isValid(char* s)
{
	Stack a;
	StackInit(&a);
	while(*s)
	{
		if(*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&a, *s);
			++s;
		}
		else
		{
			char top = StackTop(&a);
			if((top == '(' && *s == ')') || (top == '[' && *s == ']') || (top == '{' && *s == '}'))
			{
				StackPop(&a);
				++s;
			}
			else
			{
				StackDestruction(&a);
				return false;
			}
			
		}
	}
	if(StackEmpty(&a))
	{
		StackDestruction(&a);
		return true;
	}
	else
	{
		StackDestruction(&a);
		return false;
	}
	
}

int main()
{
	char* s = "({{{{}}}))";
	if(isValid(s) == true)
		printf("1");
	else
		printf("0");
	
	return 0;
}
