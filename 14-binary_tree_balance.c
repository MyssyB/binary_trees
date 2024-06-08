#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lefT_height, righT_height;

	if (tree == NULL)
	{
		return (0);
	}
	lefT_height = binary_tree_height(tree->left);
	righT_height = binary_tree_height(tree->right);

	return (lefT_height - righT_height);
}
