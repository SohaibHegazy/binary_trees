#include "binary_trees.h"

/**
* binary_tree_size - function that measures the size of a binary tree
*
* @tree: is a pointer to the root node of the tree to measure the size
*
* Return: size of binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 1, left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		tree_size = 1 + left_size + right_size;
	}

	return (tree_size);
}


