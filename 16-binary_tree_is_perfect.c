#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
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
		right_height = 1 + binary_tree_height(tree->right)

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - checks if a bianry tree is perfect
 *
 * @tree: is a popinter to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t height = binary_tree_height(tree);
	size_t leaf_nodes =  1 << (height - 1);
	size_t total_nodes = (1 << height) - 1;

	return (leaf_nodes == total_nodes);
}
