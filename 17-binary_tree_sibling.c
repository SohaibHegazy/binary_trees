#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
*
* @node: is a pointer to the node to find the sibling
*
* Return: pointer to the sibling node or NULL if no sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		sibling = node->parent->right;
	else if (node == node->parent->right)
		sibling = node->parent->left;

	if (!sibling)
		return (NULL);
	return (sibling);
}

