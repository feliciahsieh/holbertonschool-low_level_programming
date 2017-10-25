#include "binary_trees.h"

/**
 * bst_search - search for a value in a Binary Search Tree
 * @tree: root of the BST
 * @value: value to search for
 * Return: pointer to the node containing the value or NULL if not
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n == value)
		return (tree);
	if (tree->n < value)
		bst_search(tree->right, value);
	else
		bst_search(tree->left, value);

	return (NULL);
}
