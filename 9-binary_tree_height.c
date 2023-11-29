#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 id tree is NULL, otherwise height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r;
	size_t height_l;

	if (!tree)
		return (0);

	/*right of node*/
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);
	else
		height_r = 0;

	/*left od node*/
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;

	/*check the max of nodes*/
	if (height_l > height_r)
		return (height_l);
	return (height_r);
}
