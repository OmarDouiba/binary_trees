#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t right;
    size_t left;

    if (!tree || (!tree->left && !tree->right))
        return (0);
    left = binary_tree_nodes(tree->left);
    right = binary_tree_nodes(tree->right);
    return (1 + left + right);
}