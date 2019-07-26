#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through tree using in order traversal
 *@tree: pointer of the root node of the tree to traverse
 *@func: pointer to function to call each node
 * Return: return is void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
