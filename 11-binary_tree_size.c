#include "binary_trees.h"
/**
 * binary_tree_size - function that calculat the size of a tree and return it.
 * @tree: VAR1 tree
 * Return: value of size of tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, a = 0;

	if (tree)
	{
		a = binary_tree_size(tree->left);
		a += binary_tree_size(tree->right);
		size = a + 1;
	}
	return (size);
}
