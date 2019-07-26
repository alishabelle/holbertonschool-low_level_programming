#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 *@tree: pointer to the root node to measure height
 * Return: returns height of tree or null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t righty;
	size_t lefty;

	if (tree == NULL)
		return (0);

	righty = binary_tree_height(tree->left);
	lefty = binary_tree_height(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (lefty > righty)
		return (lefty + 1);
	else
		return (righty + 1);
}
