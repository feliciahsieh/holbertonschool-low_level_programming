#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_insert - Insert a node into a Binary Search Tree
 * @tree: root of BST
 * @value: value to store in new node
 * Return: pointer to new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;

	if (!(*tree))
	{
		new = (bst_t *)binary_tree_node((binary_tree_t *)tree, value);
		*tree = new;
		return (new);
	}
	if (value < (*tree)->n)
	{
		(*tree)->left = bst_insert(&((*tree)->left), value);
		(*tree)->left->parent = (*tree);
	}
	else if (value > (*tree)->n)
	{
		(*tree)->right = bst_insert(&((*tree)->right), value);
		(*tree)->right->parent = (*tree);
	}
	return (*tree);
}
