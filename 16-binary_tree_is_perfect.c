#include "binary_trees.h"

/**
* perfect_tree - function that checks if a binary tree is perfect
*
* @tree: is a pointer to the root node of the tree to check
*
* Return: 1 if tree is perfect or 0 otherwise
*/

int perfect_tree(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + perfect_tree(tree->left);
		right = 1 + perfect_tree(tree->right);
		if (left != 0 && right != 0 && left == right)
			return (left);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
*
* @tree: is a pointer to the root node of the tree to check
*
* Return: 1 if binary tree is perfect or 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (perfect_tree(tree) == 0)
		return (0);

	return (1);
}

