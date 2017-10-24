#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node in binary tree
 * @node: pointer to root of binary tree
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	gparent = node->parent->parent;

	if (parent == gparent->left)
	{
		if (gparent->right)
			return (gparent->right);
		else
			return (NULL);
	} else
	{
		if (gparent->left)
			return (gparent->left);
		else
			return (NULL);
	}

	return (NULL);
}
