#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of a binary tree
 * @tree: Pointer to root node of tree to measure size
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* count current node & recursively count left & right subtrees */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
