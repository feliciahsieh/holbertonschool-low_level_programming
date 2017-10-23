#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - finds height of a binary tree
 * @tree: pointer to binary tree
 * Return: height of tree or 0 if empty tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	else if (tree->right)
		return (1 + binary_tree_height(tree->right));

	return (0);
}
