#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root, *root2 = NULL;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_print(root);
	printf("\n");
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	printf("Test: root==NULL\n");
	binary_tree_insert_right(root2, 88);
	binary_tree_print(root2);
	printf("Test: root==1 node\n");
	root2 = binary_tree_node(NULL, 8);
	binary_tree_insert_right(root2, 88);
	binary_tree_print(root2);

	return (0);
}
