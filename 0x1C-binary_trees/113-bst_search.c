#include "binary_trees.h"

/**
 * bst_search - search for a value in a Binary Search Tree
 * @tree: root of the BST
 * @value: value to search for
 * Return: pointer to the node containing the value or NULL if not
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *match = NULL;

	if (!tree)
		return (NULL);

	if (tree->n == value)
		return (tree);
	if (tree->n < value)
		match = bst_search(tree->right, value);
	else
		match = bst_search(tree->left, value);

	return (match);
}
