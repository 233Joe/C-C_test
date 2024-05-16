#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct Stack
{
	int* _a;
	int _capacity;
	int _top;
}Stack;

void StackInit(Stack* pst);//初始化

void StackDestruction(Stack* pst);//销毁

void StackPush(Stack* pst, int x);//添加

void StackPop(Stack* pst);//删除

int StackSize(Stack* pst);//统计大小

int StackEmpty(Stack* pst);//空返回1

int StackTop(Stack* pst);//返回栈顶的数据
