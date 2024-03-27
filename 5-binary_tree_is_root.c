#include "binary_trees.h"

/**
 * binary_tree_is_root - this checks if a node is a root of a binary tree
 * @node: pointer to the node to check
 *
 * Return: the node is a root - 1
 * otherwise - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
