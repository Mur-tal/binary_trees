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

/**
 * binary_tree_is_full - function that says if a tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if tree is full
 *	0 if otherwise/NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect.
 * @tree: pointer to the root of the tree.
 * Return: 1 if binary tree is perfect or 0 if otherwise/NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
	{
		return (1);
	}
	return (0);
}
