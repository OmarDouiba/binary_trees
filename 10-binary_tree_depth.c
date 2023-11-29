#include "binary_trees.h"
/**
 * binary_tree_depth -  function that measures the depth
 * of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: 0 if tree NULL, otherwise depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t * tmp;
	size_t d = 0;

	if (!tree)
		return (0);

	tmp = tree;
	while (tmp->parent)
	{
		d++;
		tmp = tmp->parent;
	}

	return (d);
}