#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: pointer to node to insert the left-child
 * @value: value for node
 * Return: pointer to new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *t;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;

	t = parent->left;
	node->left = t;
	if (t != NULL)
	{
		t->parent = node;
	}
	parent->left = node;
	
	return (node);
}
