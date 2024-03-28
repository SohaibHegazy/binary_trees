#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a binary tree is full
*
* @tree: is a pointer to the root node of the tree to check
*
* Return: 1 if Full and 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
	{
		full_left = binary_tree_is_full(tree->left);
		full_right = binary_tree_is_full(tree->right);
		if (full_left == 0 || full_right == 0)
			return (0);
		return (1);
	}
	else
		return (0);
}

