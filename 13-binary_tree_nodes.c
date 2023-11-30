#include "binary_trees.h"
/**
 * binary_tree_nodes - returns number of nodes in a tree with children
 * @tree: VAR1 tree
 * Return: node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  nd = 0;

	if (tree)
	{
		nd += ((tree->left || tree->right) ? 1 : 0);
		nd += binary_tree_nodes(tree->left);
		nd += binary_tree_nodes(tree->right);
	}
	return (nd);
}
