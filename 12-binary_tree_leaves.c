#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the number of leaves
 * @tree: VAR1 tree
 * Return: return the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree)
	{
		a = binary_tree_leaves(tree->left);
		a += binary_tree_leaves(tree->right);
		a += (!tree->left && !tree->right) ? 1 : 0;
	}
	return (a);
}
