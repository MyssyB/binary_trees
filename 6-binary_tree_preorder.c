#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using preorder
 * trasversal
 *
 * @tree: is a pointer to the root of the tree to traverse
 * @func: is a pointer to a function to call for each node
 *
 * Return: nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{

