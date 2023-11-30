#include "binary_trees.h"

/**
 * binary_tree_is_full - full binary tree checker
 * @tree: VAR1 tree
 * Return: 1 if the tree is full or 0 if null.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int betty = 0;
	
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		betty = binary_tree_is_full(tree->left);
		return (betty && binary_tree_is_full(tree->right));

	return (0);
}
