#include "binary_trees.h"

/**
 * bst_insert - Insert a node into a Binary Search Tree
 * @tree: root of BST
 * @value: value to store in new node
 * Return: pointer to new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	/* THIS DOESN"T WORK. TYPE ERROR */
	bst_t *t;
	bst_t *new;

	t = *tree;

	new = (bst_t *)binary_tree_node((binary_tree_t *)tree, value);
	if (!t)
		return (new);

	if (value < t->n)
		t->left = bst_insert(t->left, value);
	else if (value > t->n)
		t->right = bst_insert(t->right, value);

	return ((bst_t *)new);
}
