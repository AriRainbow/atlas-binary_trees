#include "binary_trees.h"
#include <stdio.h>

void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
	{
		printf("Parent:(nil)\nLeft:(nil)\nRight:(nil)\n(180)\n");
	}
	else
	{
		printf("Parent:(%p)\nLeft:(%p)\nRight:(%p)\n(%d)\n", 
		(void *)tree->parent, (void *)tree->left, (void *)tree->right, tree->n);
	}
}
