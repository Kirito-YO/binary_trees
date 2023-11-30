#include "binary_trees.h"
/**
 * binary_tree_preorder - Display the elements of a tree
 * by performing a pre-order traversal.
 * @tree: VAR1 tree
 * @func: VAR2 funtion
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
