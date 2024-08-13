#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a node
 * @node: Pointer to the node whose uncle is to be found
 *
 * Description: Function finds the uncle of the given node by first
 * determining the parent of the node and then finding the sibling
 * of the parent
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* check if node's parent is a left or right child */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
