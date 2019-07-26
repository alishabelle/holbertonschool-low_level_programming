#include "binary_trees.h"

/**
 * binary_tree_size - function measures size of binary tree
 *@tree: pointer to root node
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum;

	if (tree == NULL)
		return (0);

	sum = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (sum);
}
