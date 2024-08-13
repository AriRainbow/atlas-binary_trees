#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: Pointer to root node of tree to measure height
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Measure height of left subtree */
	left_height = binary_tree_height(tree->left);

	/* Measure height of right subtree */
	right_height = binary_tree_height(tree->right);

	/* height of tree is the greater of 2 subtree heights */
	return ((left_height > right_height ? left_height : right_height));
}
