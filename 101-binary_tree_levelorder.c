#include "binary_trees.h"

/**
 * binary_tre_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the roor of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing is tree is NULL
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;
	int front, rear = 0;
	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current =  queue[front++];
		func(current->n);

		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;
	}

	free(queue);
}
