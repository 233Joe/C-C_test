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

bool isUnivalTree(BTNode* root) {
	if(!root)
		return true;
	
	if(root->_left && root->_data != root->_left->_data)
		return false;
	
	if(root->_right && root->_data != root->_right->_data)
		return false;   
	
	return isUnivalTree(root->_left) && isUnivalTree(root->_right);
} 

int main()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('A');
	BTNode* C = CreatNode('A');
	BTNode* D = CreatNode('A');
	BTNode* E = CreatNode('A');
	BTNode* F = CreatNode('A');
	BTNode* G = CreatNode('B');
	
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	C->_left = F;
	F->_left = G;
	
	
	
	PrevOrder(A);
	printf("\n");
	
	
	if(isUnivalTree(A))
	{
		printf("是单值二叉树");
	}
	else
	{
		printf("不是单值二叉树");
	}
	
	return 0;
}
