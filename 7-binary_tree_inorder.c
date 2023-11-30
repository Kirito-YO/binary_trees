#include "binary_trees.h"
/**
 * binary_tree_inorder - Display the elements of a tree
 * by utilizing an in-order traversal.
 * @tree: VAR1 tree
 * @func: VAR2 function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
