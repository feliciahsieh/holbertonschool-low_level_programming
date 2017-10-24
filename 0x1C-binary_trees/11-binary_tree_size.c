#include "binary_trees.h"

/**
 * binary_tree_size - finds size of a binary tree
 * @tree: pointer to root of the binary tree
 * Return: size of tree or 0 if empty tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}
