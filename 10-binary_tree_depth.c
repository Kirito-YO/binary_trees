#include "binary_trees.h"
/**
 * binary_tree_depth - Calculate the depth of a specified node in the tree,
 * measured from the root.
 * @tree: VAR tree
 * Return: number of depth or 0 if tree is null.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
