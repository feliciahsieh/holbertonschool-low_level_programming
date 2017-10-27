#include "binary_trees.h"

/**
 * binary_tree_is_heap - Checks if tree is a Max Binary Heap
 * @tree: pointer to the tree root
 * Return: 1 if TRUE. 0 if FALSE
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	/* int isBinHeap = 1; */
	
	if (!tree)
		return (1);

	if ((tree->n > tree->left->n) && (tree->n > tree->right->n) &&
	    (!(tree->left->left) && !(tree->left->right) &&
	     (!(tree->right->left) && !(tree->right->right))))
		return (1);
	else
		return (0);

	return (binary_tree_is_heap(tree->left) &&
		binary_tree_is_heap(tree->right));
}
