#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the
* depth of a node in a binary tree
*
* @tree: is a pointer to the node to measure the depth
*
* Return: depth of a node in a binary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		node_depth = 1 + binary_tree_depth(tree->parent);

	return (node_depth);
}

