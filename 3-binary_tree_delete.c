#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to root node of tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* free current node */
	free(tree);
}
