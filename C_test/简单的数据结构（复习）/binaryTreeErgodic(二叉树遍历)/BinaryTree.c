#include "BinaryTree.h"

//前序遍历
void PrevOrder(BTNode* root)
{
	if(root == NULL)
	{
		printf("NULL ");
		return ;
	}
	printf("%c ", root->_data);
	PrevOrder(root->_left);
	PrevOrder(root->_right);
}

//中序遍历
void CentreOrder(BTNode* root)
{
	if(root == NULL)
	{
		printf("NULL ");
		return ;
	}
	PrevOrder(root->_left);
	printf("%c ", root->_data);
	PrevOrder(root->_right);
}

//后续遍历
void AfterOrder(BTNode* root)
{
	if(root == NULL)
	{
		printf("NULL ");
		return ;
	}
	PrevOrder(root->_left);
	PrevOrder(root->_right);
	printf("%c ", root->_data);
}

//树的节点个数
int TreeSize(BTNode* root)
{
	if(root == NULL)
		return 0;
	
	return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}

//树的叶子节点个数
int TreeLeafSize(BTNode* root)
{
	if(root == NULL)
		return 0;
	
	if(root->_left == NULL && root->_right == NULL)
		return 1;
	
	return TreeLeafSize(root->_left) + TreeLeafSize(root->_right);
}

//树的高度
int TreeHeightSize(BTNode* root)
{
	if(root == NULL)
		return 0;
	
	int leftHeight = TreeHeightSize(root->_left) + 1;
	int rightHeight = TreeHeightSize(root->_right) + 1;
	return leftHeight > rightHeight ? leftHeight : rightHeight;
}

//创建节点
BTNode* CreateNode(BTDataType x)
{
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	assert(tmp != NULL);
	tmp->_data = x;
	tmp->_left = tmp->_right = NULL;
	return tmp;
}
