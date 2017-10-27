#include "binary_trees.h"

/**
 * isLeaf - Checks if node is a leaf
 * @node: pointer to the nodeo
 * Return: 1 if TRUE. 0 if FALSE
 */
int isLeaf(const binary_tree_t *node)
{
	return ((node->left == NULL) && (node->right == NULL));
}

/**
 * binary_tree_is_heap - Checks if tree is a Max Binary Heap
 * @tree: pointer to the tree root
 * Return: 1 if TRUE. 0 if FALSE
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (isLeaf(tree))
		return (1);

	if ((tree->right) && (tree->left == NULL))
	{
		if (tree->right->n > tree->n)
		{
			if (binary_tree_is_heap(tree->right->left))
			{
				if (binary_tree_is_heap(tree->right->right))
					return (1);
				else
					return (0);
			}
			else
				return (0);
		}
		return (0);
	}

	if ((tree->left) && (tree->right == NULL))
	{
		if (tree->left->n < tree->n)
		{
			if (binary_tree_is_heap(tree->left->left))
			{
				if (binary_tree_is_heap(tree->left->right))
					return (1);
				else
					return (0);
			}
			else
				return (0);
		}
		return (0);
	}
	if ((tree->n > tree->left->n) && (tree->n > tree->right->n))
	{
		if (binary_tree_is_heap(tree->left))
		{
			if (binary_tree_is_heap(tree->right))
				return (1);
			else
				return (0);
		}
		else
			return (0);
	}
	else
		return (0);
}
