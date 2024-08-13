#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree
 * @tree: Pointer to root node of tree to count number of leaves
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* if node is leaf (no left and right children), count it */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recursively count leaves in left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
