#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balance factor
 *@tree: pointer to root node
 * Return: 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft= 0;
	int heightRight = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		balance = 0;
	if (tree->left == NULL)
		heightLeft = -1;
	if (tree->right == NULL)
		heightRgiht = -1;
	heightLeft += binary_tree_height(tree->left);
	heightRight += binary_tree_height(tree->right);
	balance = (heightLeft - heightRight);
	return (balance);
}



/**
 * binary_tree_height - this function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measur the height
 *
 * Return: height of the tree or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depthRight;
	size_t depthLeft;

	if (tree ==NULL)
		return (0);

	depthRight = binary_tree_height(tree->left);
	depthLeft = binary_tree_height(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (depthLeft > depthRight)
		return (depthLeft + 1);
	else
		return (depthRight + 1);
}
