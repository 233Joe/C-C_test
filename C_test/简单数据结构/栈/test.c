#include"Stack.h"
#include"Stack.c"

void test1()
{
	Stack arr;
	StackInit(&arr);
	StackPush(&arr, 1);
	StackPush(&arr, 2);
	StackPush(&arr, 3);
	StackPush(&arr, 4);
	StackPush(&arr, 5);
	printf("%d %d", arr._top, arr._capacity);
	StackPop(&arr);
	StackPop(&arr);
	StackPop(&arr);
	printf("%d %d", arr._top, arr._capacity);

	StackDestruction(&arr);
}



int main()
{
	test1();
	return 0;
}
