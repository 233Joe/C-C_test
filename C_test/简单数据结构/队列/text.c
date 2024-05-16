#include"queue.h"
#include"queue.c"

void test1()
{
	Queue arr;
	QueueInit(&arr);
	printf("%d\n", QueueEmpty(&arr));
	QueuePush(&arr, 1);
	QueuePush(&arr, 2);
	QueuePush(&arr, 3);
	QueuePush(&arr, 4);
	QueuePush(&arr, 5);
	int i = 1;
	while(i > 0){
		printf("%d %d\n", arr._head->_data, arr._tail->_data);
		i--;
	}
	
	QueuePop(&arr);
	QueuePop(&arr);
	QueuePop(&arr);
	i = 1;
	while(i > 0){
		printf("%d %d\n", arr._head->_data, arr._tail->_data);
		i--;
	}
	
	printf("%d\n", QueueTop(&arr));
	
	QueueDestruction(&arr);
}



int main()
{
	test1();
	return 0;
}
