#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - function to find uncle of a node in a binary tree
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	{
		return (NULL);
	}
	return (sibling(node->parent));
}

/**
 * binary_tree_sibling - function that finds sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: A pointer to sibling node.
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
