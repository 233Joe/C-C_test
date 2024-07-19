#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* _a;
	int _top;
	int _capacity;
}Stack;

//初始化
void StackInit(Stack* pst);
//销毁
void StackDestory(Stack* pst);
//进栈
void StackPush(Stack* pst, int x);
//出栈
void StackPop(Stack* pst);
//返回数据个数
int StackSize(Stack* pst);
//返回栈顶数据
STDataType StackTop(Stack* pst);
//判断栈是否为空 0非空 1空
int  StackEmpty(Stack* pst);
