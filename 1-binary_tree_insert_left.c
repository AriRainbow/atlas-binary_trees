#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as left-child of another node
 * @parent: Pointer to node to insert left-child in
 * @value: Value to store in new node
 *
 * Return: Pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left; /* set new node's L-C to current L-C */
	new_node->right = NULL;

	/* if parent already has a left-child */
	if (parent->left != NULL)
		/* update existing left-child's parent */
		parent->left->parent = new_node;
	/* update parent's left-child to new node */
	parent->left = new_node;

	return (new_node);
}
