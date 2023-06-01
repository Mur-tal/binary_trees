#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 *
 * @tree: pointer to root node to measure balance factor.
 *
 * Return: balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
	{
		return (0);
	}

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height, or 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
	{
		return (0);
	}
	l += 1 + binary_tree_height(tree->left);
	r += 1 + binary_tree_height(tree->right);

	if (l > r)
		return (l);
	return (r);
}
