#include "Stack.h"
#include "Stack.c"

void TestStack()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	
	printf("%d\n", StackSize(&st));
	while(!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	printf("\n%d\n", StackSize(&st));
	StackDestory(&st);
}

int main()
{
	TestStack();
	
	return 0;
}
