#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
*
* @tree: is a pointer to the root node of the tree to measure the height.
*
* Return: height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);
	else
		count_left = 1;
	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);
	else
		count_right = 1;

	return ((count_left > count_right) ? count_left : count_right);
}

/**
* binary_tree_balance - function that measures
* the balance factor of a binary tree
*
* @tree: is a pointer to the root node of
* the tree to measure the balance factor
*
* Return: the balance factor of a binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int tree_balance = 0, left_balance = 0, right_balance = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		left_balance = ((int)binary_tree_height(tree->left));
		right_balance = ((int)binary_tree_height(tree->right));
		tree_balance = left_balance - right_balance;
	}

	return (tree_balance);
}

