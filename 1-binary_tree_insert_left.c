#include "binary_trees.h"

/**
 *binary_tree_insert_left -  function that inserts a node as
 *the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: is the value to store in the new node
 *Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *tmp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!parent->left)
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	else
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = tmp;
		tmp->parent = new_node;
	}

	return (new_node);
}
