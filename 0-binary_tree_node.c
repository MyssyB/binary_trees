#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_t - creates a binary tree
 *
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node.
 *
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode != NULL)
	{
		newnode->struct binary_tree_s *parent;
		newnode->n = value;
		newnode->NULL;
		newnode->NULL;
	}
	return (newnode);
}	
