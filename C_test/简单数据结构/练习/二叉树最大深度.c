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

int maxDepth(BTNode* root) {
	if(!root)
		return 0;
	
	int leftdepth = maxDepth(root->_left);
	int rightdepth = maxDepth(root->_right);
	return leftdepth > rightdepth ? (leftdepth + 1) : (rightdepth + 1);
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
	
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	C->_left = F;
	F->_left = G;
	

	
	PrevOrder(A);
	printf("\n");


	printf("%d\n", maxDepth(A));

	return 0;
}
