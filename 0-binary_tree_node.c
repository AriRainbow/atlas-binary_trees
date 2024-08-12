#include "binary_trees.h"
#include <stddef.h>
#include <stdllib.h>

/**
 * binary_tree_node - Creates binary tree node
 * @parent: Pointer to parent node
 * @value: Value to put in new node
 *
 * Return: Pointer to new node, or NULL if no space available
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL); /* allocation failed */

	/* initialize new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
