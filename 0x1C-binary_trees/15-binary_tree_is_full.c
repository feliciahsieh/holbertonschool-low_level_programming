#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: pointer to root of the binary tree
 * Return: 0 if FALSE. 1 if TRUE
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 0;

	if (!tree)
		return (0);

	if (!tree->left && (!tree->right))
		return (1);

	if ((tree->left) && (tree->right))
	{
		flag = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (flag);
	}
	return (0);
}
