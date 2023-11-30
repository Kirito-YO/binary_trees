#include "binary_trees.h"

/**
 * binary_tree_is_root - root of a binary tree node checker.
 * @node: var1 check
 * Return: if is not a root 0 or 1 if it is.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
