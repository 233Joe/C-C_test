#include <stdbool.h>
#include <stdlib.h>

typedef struct {
	int* _a;
	int _front;
	int _rear;
	int _k;
} MyCircularQueue;

bool myCircularQueueIsFull(MyCircularQueue* obj);

bool myCircularQueueIsEmpty(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	q->_front = q->_rear = 0;
	q->_a = (int*)malloc(sizeof(int)*(k+1));
	q->_k = k;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if(myCircularQueueIsFull(obj))
		return false;
	obj->_a[obj->_rear] = value;
	obj->_rear %= (obj->_k+1);
	return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	if(myCircularQueueIsEmpty(obj))
		return false;
	obj->_front++;
	obj->_front %= (obj->_k+1);
	return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
	if(myCircularQueueIsFull(obj))
		return -1;
	return obj->_a[obj->_front];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
	if(myCircularQueueIsEmpty(obj))
		return -1;
	
	int tail = obj->_rear;
	if(tail == 0)
		tail = obj->_k;
	
	return obj->_a[tail];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->_front == obj->_rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	return (obj->_rear+1) % (obj->_k+1) == obj->_rear;
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->_a);
	free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
  
 * bool param_2 = myCircularQueueDeQueue(obj);
  
 * int param_3 = myCircularQueueFront(obj);
  
 * int param_4 = myCircularQueueRear(obj);
  
 * bool param_5 = myCircularQueueIsEmpty(obj);
  
 * bool param_6 = myCircularQueueIsFull(obj);
  
 * myCircularQueueFree(obj);
 */
