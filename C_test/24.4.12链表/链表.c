#include<stdio.h>
#include <stdlib.h>	
typedef struct MY_LinkedList
{
	int data;
	struct MY_LinkedList *next;
}Node;

//初始化链表
Node* list_init(void)
{
	Node* list = (Node *)malloc(sizeof(Node));
	if(list == NULL)
		return NULL;
	
	if(list != NULL)
	{
		list->data = 0;
		list->next = NULL;
	}
	return list;
}

//添加
int node_add(Node* list, int data)
{
	if(list == NULL)
		return -1;
	
	Node* new_list = (Node *)malloc(sizeof(Node));
	if(new_list == NULL)
		return -1;
	
	if(list->next == NULL)
	{
		list->next = new_list;
		new_list->data = data;
		new_list->next = NULL;
	}
	else
	{
		new_list->next = list->next;
		list->next = new_list;
		new_list->data = data;
		
	}
	while(new_list->next != NULL)
	{
		new_list = new_list->next;
	}
	Node* pRear = new_list;
	return 0;
}

//删除链表
void list_del()
{
	
}

//打印链表
void list_print(Node* list)
{
	if(list == NULL)
		return;
	
	Node* cur_list = list->next;
	while(cur_list != NULL)
	{
		printf("%d ", cur_list->data);
		cur_list = cur_list->next;
	}
}

int main()
{
	Node* list = list_init();
	if(list == NULL)
		return -1;
	
	node_add(list, 1);
	node_add(list, 2);
	node_add(list, 3);
	node_add(list, 4);
	
	list_print(list);
	return 0;
}
