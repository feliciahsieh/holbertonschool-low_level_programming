#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to node to insert the left-child
 * @value: value for node
 * Return: pointer to new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *t;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;

	t = parent->right;
	node->right = t;
	if (t != NULL)
	{
		t->parent = node;
	}
	parent->right = node;

	return (node);

}
