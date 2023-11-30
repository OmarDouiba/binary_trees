#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the size
 * Return: Size of tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;

	if (!tree)
	{
		return (0);
	}

	size_right = binary_tree_size(tree->right);
	size_left = binary_tree_size(tree->left);
	return (1 + size_left + size_right);
}
