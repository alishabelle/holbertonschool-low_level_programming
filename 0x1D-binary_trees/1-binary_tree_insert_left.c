#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child node
 *@parent: parameter
 *@value: parameter
 * Return: returns pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL;

	if (parent == NULL)
		return (NULL);

	leftNode = malloc(sizeof(binary_tree_t));
	if (leftNode == NULL)
		return (NULL);

	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = NULL;
	leftNode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = leftNode;
		leftNode->left = parent->left;
	}

	parent->left = leftNode;
	return (leftNode);
}
