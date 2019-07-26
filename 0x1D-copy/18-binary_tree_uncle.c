#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *@node: pointer to the the node to find the uncle
 * Return: returns pointer to the pointer node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return node->parent->parent->left;
	else if (node->parent->parent->left == node->parent)
		return node->parent->parent->right;
	else
		return (NULL);
}
