#include "binary_trees.h"

/**
* binary_tree_leaves - function that counts the leaves in a binary tree
*
* @tree: is a pointer to the root node
* of the tree to count the number of leaves
*
* Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count = 0, count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);

	count_right = binary_tree_leaves(tree->right);
	count_left = binary_tree_leaves(tree->left);
	leaves_count = count_right + count_left;

	if (!tree->left && !tree->right)
		return (leaves_count + 1);
	else
		return (leaves_count);
}

