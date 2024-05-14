#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	int data;
}ListNode;

ListNode* ListInit();

ListNode* ListSpace(int data);

void ListPushBack(ListNode* phead, int data);

void ListPopBack(ListNode* phead);

void ListPushuFrnot(ListNode* phead, int data);

void ListPopFront(ListNode* phead);
