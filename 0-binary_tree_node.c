#include "binary_trees.h"
#include <stddef.h>

#define MAX_NODES 1024

/**
 * binary_tree_node - Creates binary tree node
 * @parent: Pointer to parent node
 * @value: Value to put in new node
 *
 * Return: Pointer to new node, or NULL if no space available
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	static binary_tree_t nodes[MAX_NODES];
	static size_t next_node_index = 0;
	binary_tree_t *new_node;

	if (next_node_index >= MAX_NODES)
		return (NULL); /* no space available */

	new_node = &nodes[next_node_index++];

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
