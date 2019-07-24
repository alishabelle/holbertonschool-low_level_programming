#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts leaves in binary tree
 *@tree: pointre to root node
 * Return: returns number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count  = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		count++;

	return (count);
}
