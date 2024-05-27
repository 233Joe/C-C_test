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

bool isSameTree(BTNode* q, BTNode* p)
{
	if(!q && !p)
		return true;
	
	if(!q || !p)
		return false;
	
	if(q->_data != p->_data)
		return false;
	
	return isSameTree(q->_left, p->_left) && isSameTree(q->_right, p->_right);
}

bool isSubtree(BTNode* root, BTNode* subRoot)
{
	if(!root)
		return false;
	
	if(isSameTree(root, subRoot))
		return true;
	
	return isSubtree(root->_left, subRoot) || isSubtree(root->_right, subRoot);
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
	

	BTNode* B1 = CreatNode('B');
	BTNode* D1 = CreatNode('D');
	BTNode* E1 = CreatNode('E');
	
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	C->_left = F;
	F->_left = G;
	
	B1->_left = D1;
	B1->_right = E1;
	
	PrevOrder(A);
	printf("\n");
	PrevOrder(B1);
	printf("\n");
	
	if(isSubtree(A, B1))
	{
		printf("是子树");
	}
	else
	{
		printf("不是子树");
	}
	return 0;
}
