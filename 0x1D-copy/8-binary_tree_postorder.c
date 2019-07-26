#include "binary_trees.h"

/**
 * binary_tree_postorder - this function goes through a binary tree using
 *@tree:pointer of the root node of the tree to traverse
 *@func: pointer to function to call each node
 * Return: return is void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
		if (tree == NULL)
			return;
		if (func == NULL)
			return;

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

}
