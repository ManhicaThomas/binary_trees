#include "binary_trees.h"

/**
 * binary_tree_insert_right - this insert a node as the right-child
 * of another in a binary tree
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node.
 *
 * Return: parent is NULL or an error occurs - NULL
 * otherwise - pointer to the new node
 * Description: parent already has a right-child, new node
 * takes its place and the old right-child is as set
 * the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
