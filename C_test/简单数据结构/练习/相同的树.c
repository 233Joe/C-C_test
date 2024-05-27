#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct BinaryTreeNode
{
	char _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

BTNode* CreatNode(char c)
{
	BTNode* pn = (BTNode*)malloc(sizeof(BTNode));
	pn->_data = c;
	pn->_left = NULL;
	pn->_right = NULL;
	return pn;
}

void PrevOrder(BTNode* pn)
{
	if(!pn)
	{		
//		printf("NULL ");
		return;
	}
	
	printf("%c ", pn->_data);
	PrevOrder(pn->_left);
	PrevOrder(pn->_right);
}

bool isSameTree(BTNode* p, BTNode* q) {
	if(!p && !q)
		return true;
	
	if(!p || !q)
		return false;
	
	if(p->_data != q->_data)
		return false; 
	
	return isSameTree(p->_left , q->_left) && isSameTree(p->_right , q->_right);
}


int main()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('B');
	BTNode* C = CreatNode('C');
	BTNode* D = CreatNode('D');
	BTNode* E = CreatNode('E');
	BTNode* F = CreatNode('F');
	BTNode* G = CreatNode('G');
	
	BTNode* A1 = CreatNode('A');
	BTNode* B1 = CreatNode('B');
	BTNode* C1 = CreatNode('C');
	BTNode* D1 = CreatNode('D');
	BTNode* E1 = CreatNode('E');
	BTNode* F1 = CreatNode('F');
	BTNode* G1 = CreatNode('G');
	
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	C->_left = F;
	C->_left = F;
	F->_left = G;
	
	A1->_left = B1;
	A1->_right = C1;
	B1->_left = D1;
	B1->_right = E1;
	C1->_left = F1;
	C1->_left = F1;
	F1->_left = G1;
	
	PrevOrder(A);
	printf("\n");
	PrevOrder(A1);
	printf("\n");
	
	if(isSameTree(A, A1))
	{
		printf("相同");
	}
	else
	{
		printf("不同");
	}
	return 0;
}
