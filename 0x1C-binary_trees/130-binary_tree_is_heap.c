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
	/* int isBinHeap = 1; */
	
	if (!tree)
		return (0);

	if ((tree->n > tree->left->n) && (tree->n > tree->right->n) &&
	    isLeaf(tree->left) && isLeaf(tree->right))
		return (1);
	else
		return (0);

	return (binary_tree_is_heap(tree->left) &&
		binary_tree_is_heap(tree->right));
}
