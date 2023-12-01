#include "binary_trees.h"
/**
 * tree_pft - test if tree is perfect.
 * @tree: VAR1 tree.
 * Return: null if tree is perfect.
 */
int tree_pft(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (tree->left && tree->right)
	{
		a = 1 + tree_pft(tree->left);
		b = 1 + tree_pft(tree->right);
		if (b == a && b != 0 && a != 0)
			return (b);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - is it a tree or not
 * @tree: var1 tree
 * Return: null or 1 if tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		r = tree_pft(tree);
		if (r != 0)
		{
			return (1);
		}
		return (0);
	}
}
