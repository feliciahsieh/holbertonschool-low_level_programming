#include <stdio.h>
#include "binary_trees.h"

/**
 * myPow - Computes math power function
 * @n: exponent to raise power
 * Return: 2^n value
 */
int myPow(int n)
{
	int i, product = 1;

	for (i = 0; i < n; i++)
	{
		product *= 2;
	}
	printf("n:%d prod:%d\n", n, product);
	return (product);
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect.
 * Perfect binary tree means nodes=2^(h+1), where h=height.
 * Leaf nodes=2^h or (n+1)/2
 * @tree: pointer to root of the binary tree
 * Return: 0 if FALSE. 1 if TRUE
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	printf("size:%d height:%d\n", size, height);

	if (size == myPow(height + 1))
		return (1);
	else
		return (0);

	return (1);
}
