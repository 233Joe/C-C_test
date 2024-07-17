#include "BinaryTree.h"
#include "BinaryTree.c"

int main()
{
	BTNode* a = CreateNode('A');//					A
	BTNode* b = CreateNode('B');//				  B	  C
	BTNode* c = CreateNode('C');//			    D  E    
	BTNode* d = CreateNode('D');
	BTNode* e = CreateNode('E');
	a->_left = b;
	a->_right = c;
	b->_left = d;
	b->_right = e;
	
	PrevOrder(a);
	printf("\n");
	
	CentreOrder(a);
	printf("\n");
	
	AfterOrder(a);
	printf("\n");
	
	printf("TreeSize:%d\n", TreeSize(a));
	printf("TreeLeafSize:%d\n", TreeLeafSize(a));
	printf("TreeHeightSize:%d\n", TreeHeightSize(a));
	return 0;
}
