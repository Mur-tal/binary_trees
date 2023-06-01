#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: pointer to the Node to check
 * Return: 0 if node is not a root and if node is NULL, 1 if it is a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
