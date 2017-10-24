#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to root of the binary tree
 * Return: number of leaves in tree or NULL if pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);

	l = tree->left;
	r = tree->right;
	if (!l && !r)
		return (1);

	return (binary_tree_leaves(l) + binary_tree_leaves(r));
}
