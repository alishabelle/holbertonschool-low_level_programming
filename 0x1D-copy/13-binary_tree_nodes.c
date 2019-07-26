#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 *@tree: pointer to root node
 * Return: returns count of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	if (tree->left != NULL || tree->right != NULL)
		count++;

	return (count);
}
