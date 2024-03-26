#include "binary_trees.h"

/**
 * bst_insert - Inserts value in a binary search tree.
 * @tree: Double pointer to the root node of the BST to insert the value.
 * @value: Value to store in the nodeto be inserted.
 * Return: Pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *new;

	if (tree != NULL)
	{
		curr = *tree;

		if (curr == NULL)
		{
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}
		if (value < curr->n) /*insert in left subtree */
		{
			if (curr->left != NULL)
				return (bst_insert(&curr->left, value));
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->left = new);
		}
		if (value > curr->n) /*insert in the subtree*/
		{
			if (curr->right != NULL)
				return (bst_insert(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
