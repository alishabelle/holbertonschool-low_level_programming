#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks if node is leaf
 *@node: pointer to node to check for leaf
 * Return: returns 0 if not a leaf, 1 if it is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
