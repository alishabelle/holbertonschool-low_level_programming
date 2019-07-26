#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right child node
 *@parent: pointer to parent node
 *@value: value
 * Return: returns pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);

	rightNode = malloc(sizeof(binary_tree_t));
	if (rightNode == NULL)
		return (NULL);

	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = rightNode;
		rightNode->right = parent->right;
	}

	parent->right = rightNode;
	return (rightNode);
}
