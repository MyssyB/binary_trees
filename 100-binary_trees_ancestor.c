#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor, otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	ancestor = first;

	while (ancestor)
	{
		if (binary_trees_ancestor(ancestor, second))
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}
