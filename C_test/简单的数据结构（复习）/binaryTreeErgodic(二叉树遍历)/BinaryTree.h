#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef char BTDataType;

typedef struct BinartTreeNode
{
	BTDataType _data;
	struct BinartTreeNode* _left;
	struct BinartTreeNode* _right;
}BTNode;

//前序遍历
void PrevOrder(BTNode* root);

//中序遍历
void CentreOrder(BTNode* root);

//后续遍历
void AfterOrder(BTNode* root);

//树的节点个数
int TreeSize(BTNode* root);

//树的叶子节点个数
int TreeLeafSize(BTNode* root);

//树的高度
int TreeHeightSize(BTNode* root);

//创建节点
BTNode* CreateNode(BTDataType x);
