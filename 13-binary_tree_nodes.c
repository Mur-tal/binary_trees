#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
