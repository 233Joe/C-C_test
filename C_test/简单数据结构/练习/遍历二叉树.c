#include<stdio.h>
#include<stdlib.h>
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
		printf("NULL ");
		return;
	}
	
	printf("%c ", pn->_data);
	PrevOrder(pn->_left);
	PrevOrder(pn->_right);
}

void InOrder(BTNode* pn)
{
	if(!pn)
	{		
		printf("NULL ");
		return;
	}
	
	InOrder(pn->_left);
	printf("%c ", pn->_data);
	InOrder(pn->_right);
}

void PostOrder(BTNode* pn)
{
	if(!pn)
	{		
		printf("NULL ");
		return;
	}
	
	PostOrder(pn->_left);
	PostOrder(pn->_right);
	printf("%c ", pn->_data);
}

//int TreeSize(BTNode* pn)
//{
//	if(!pn)
//	{		
//		return 0;
//	}
//		static int sz = 0;
//		sz++;
//		TreeSize(pn->_left);
//		TreeSize(pn->_right);
//}

//void TreeSize(BTNode* pn, int* sz)
//{
//	if(!pn)
//	{		
//		return ;
//	}
//		(*sz)++;
//		TreeSize(pn->_left, sz);
//		TreeSize(pn->_right, sz);
//	
//}

int TreeSize(BTNode* pn)//求节点的个数
{
	if(!pn)
	{		
		return 0;
	}
	return 	1+TreeSize(pn->_left)+TreeSize(pn->_right);
}

int LeafSize(BTNode* pn)//求叶子节点的个数
{
	if(!pn)	
		return 0;

	if(pn->_left == NULL && pn->_right == NULL)
		return 1;
	
	return LeafSize(pn->_left) + LeafSize(pn->_right);
}

int TreeDepth(BTNode* pn)//计算树的深度
{
	if(!pn)	
		return 0;
	
	if(pn->_left == NULL && pn->_right == NULL)
		return 1;
	
	int h = TreeDepth(pn->_left)+1;
	
	if(TreeDepth(pn->_right)+1 > h)
		h = TreeDepth(pn->_right)+1;
	
	return h;
}

int main()
{
	BTNode* A = CreatNode('A');//			A
	BTNode* B = CreatNode('B');//		B		C
	BTNode* C = CreatNode('C');//	D	E	   f
	BTNode* D = CreatNode('D');//			  G
	BTNode* E = CreatNode('E');
	BTNode* F = CreatNode('F');
	BTNode* G = CreatNode('G');
	
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	C->_left = F;
	C->_left = F;
	F->_left = G;
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
//	int sz = 0;
	
	printf("\n%d", TreeSize(A));
	printf("\n%d", LeafSize(A));
	printf("\n%d", TreeDepth(A));
	return 0;
}
