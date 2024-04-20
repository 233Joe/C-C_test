#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef struct list
{
	int val;
	struct list* next;
}Node;

//初始化
Node* ini_list()
{
	Node* list = (Node*)malloc(sizeof(Node)); 
	if(list == NULL)
	{
		return NULL;
	}
	else
	{
		list->next = NULL;
		list->val = 0;
	}
	return list;
}

//添加
int* add_list(struct list* l, int data)
{
	if(l == NULL)
		return NULL;
	
	Node* new_list = (Node*)malloc(sizeof(Node));
	if(new_list == NULL)
		return NULL;
	
	new_list->val = data;
	if(l->next == NULL)
	{
		l->next = new_list;
		new_list->next = NULL;
	}
	else
	{
		new_list->next = l->next;
		l->next = new_list;
	}
	return 0;
}

//打印
void print_list(Node* x)
{
	if(x == NULL)
		return ;
	
	Node* xp = x->next;
	while(xp != NULL)
	{
		printf("%d ", xp->val);
		xp = xp->next;
	}
}

Node* and_list(Node* n1, Node* n2)
{
	int np = 0;
	int nber = 0;
	Node* head = ini_list();
	Node* l1 = n1->next;
	Node* l2 = n2->next;
	while(l1 || l2)
	{
		int g = l1->val + l2->val + np;
		np = 0;
		if(g >= 10)
		{
			np = g/10;
		}
		nber += g % 10;
		

		if((l1->next && l2->next) || (!l1->next && !l2->next))
		{
			l1 = l1->next;
			l2 = l2->next;
		}
		else if(l1->next)
		{
			l2->val = 0;
			l1 = l1->next;
		}
		else if(l2->next)
		{
			l1->val = 0;
			l2 = l2->next;
		}		
		
		if(l1 || l2)
		{
			nber *= 10;
		}
		else if(np > 0 && l1 == NULL && l2 == NULL)
		{
			nber *= 10;
			nber += np;
		}
	}
	while(nber > 0)
	{
		add_list(head, nber % 10);
		nber /= 10;
	}

	print_list(head);
	return head;
}

int main()
{
	Node* n1 = ini_list();
	Node* n2 = ini_list();
	if(n1 == NULL && n2 == NULL)
	{
		return -1;
	}
	int x = 0;
	while(scanf("%d", &x) != EOF)
	{
		add_list(n1, x);
	}
	printf("2:\n");
	while(scanf("%d", &x) != EOF)
	{
		add_list(n2, x);
	}

	
	print_list(n1);
	printf("\n");
	print_list(n2);
	printf("\n");
	and_list(n1, n2);
	
	
	return 0;
}
