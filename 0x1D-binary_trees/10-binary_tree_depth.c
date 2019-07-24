#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures depth of node in tree
 *@tree: pointer to node to measure depth
 * Return: returns size_t int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i= 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		i++;
	}
	return (i);
}
