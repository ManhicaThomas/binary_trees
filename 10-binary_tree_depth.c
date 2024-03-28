#include "binary_trees.h"

/**
 * binary_tree_depth - this measures the depth of a node in a bin tree
 * @tree: pointer to the node to measure the depth
 * Return: if tree is NULL, func must return 0, otherwise return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
