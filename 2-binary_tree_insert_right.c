#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of 
 * another node
 * @parent: Pointer to node to insert right-child in
 * @value: Vallue to store in new node
 *
 * Return: Pointer to created node, oe NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	/* set new node's R-C to current R-C */
	new_node->right = parent->right;
	new_node->left = NULL;

	/* if parent already has right-child */
	if (parent->right != NULL)
		/* update existing right-child's parent */
		parent->right->parent = new_node;
	/* update parent's right-child to new node */
	parent->right = new_node;

	return (new_node);
}
