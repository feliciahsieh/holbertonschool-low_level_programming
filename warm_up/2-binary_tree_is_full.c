#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full (0 or 2 children at each node)
 * @tree: binary tree
 * Return: 0 if not full. 1 if it is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
