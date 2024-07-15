#include "Queue.h"
#include "Queue.c"

void TestQueue()
{
	Queue pq;
	QueueInit(&pq);
	QueuePush(&pq, 1);
	QueuePush(&pq, 2);
	QueuePush(&pq, 3);
	QueuePush(&pq, 4);
	QueuePush(&pq, 5);
	
	printf("%d\n", QueueSize(&pq));
	printf("%d\n", QueueBack(&pq));
	while(!QueueEmpty(&pq))
	{
		printf("%d ", QueueFront(&pq));
		QueuePop(&pq);
	}
	printf("\n%d\n", QueueSize(&pq));
	QueueDestory(&pq);
}


int main()
{
	TestQueue();
	
	return 0;
}
