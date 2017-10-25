#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotate binary tree to the right
 * @tree: root node of binary tree
 * Return: new root of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;
	binary_tree_t *gChild = NULL;
	binary_tree_t *lChild = NULL, *rChild = NULL;

	rChild = gChild = lChild;
	lChild = rChild;

	if (!tree)
		return (NULL);

	/* Initialize pointers */
	root = tree->left;
	lChild = tree->left;
	rChild = tree->right;
	if (tree->left)
		if (tree->left->right)
			gChild = tree->left->right;

	tree->parent = lChild;
	lChild->parent = NULL;
	lChild->right = tree;

	if (gChild)
		tree->left = gChild;
	else
		tree->left = NULL;

	return (root);
}
