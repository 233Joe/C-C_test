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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// int TreeDepth(struct TreeNode* root)
// {
//     if(!root)
//         return 0;

//     int leftDepth = TreeDepth(root->left);
//     int rightDepth = TreeDepth(root->right);

//     return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
// }

// bool isBalanced(struct TreeNode* root) {
//     if(!root)
//         return true;

//     int difference = TreeDepth(root->left) - TreeDepth(root->right);

//     if(abs(difference) > 1)
//         return false;

//     return isBalanced(root->left) && isBalanced(root->right);
// }

//      3
//    9   20
//  n n  15 7


bool isBalanced(BTNode* root, int* i) {
	if(!root)
	{
		*i = 0;
		return true;
	}
	int leftDepth = 0;
	int rightDepth = 0;
	if(isBalanced(root->_left, &leftDepth) && isBalanced(root->_right, &rightDepth))
	{
		if(abs(leftDepth - rightDepth) < 2)
		{
			*i = leftDepth > rightDepth ? leftDepth+1 :rightDepth+1;
			return true;
		}
	}
	return false;
}


int main()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('A');
	BTNode* C = CreatNode('A');
	BTNode* D = CreatNode('A');

	
	A->_left = B;
	A->_right = C;
	B->_left = D;

	
	
	
	PrevOrder(A);
	printf("\n");
	
	int i = 0;
	if(isBalanced(A, &i))
	{
		printf("是单值二叉树");
	}
	else
	{
		printf("不是单值二叉树");
	}
	
	return 0;
}
