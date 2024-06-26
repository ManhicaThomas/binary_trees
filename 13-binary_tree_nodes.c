#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts the nodes with at least 1 child in a
 * bin tree
 * @tree: pointer to the root node of the tree to count the num of nodes
 *
 * Return: tree is NULL, func will return 0, otherwise return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
