#include "binary_trees.h"

/**
 * binary_trees_ancestor - ancestor checker
 * @first: VAR1 1eme node.
 * @second: VAR2 2eme node.
 * Return: return ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *b, *t;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
		return ((binary_tree_t *)first);
	b = first->parent, t = second->parent;
	if (b == NULL || first == t || (!b->parent && t))
	{
		return (binary_trees_ancestor(first, t));
	}
	else if (t == NULL || b == second || (!t->parent && b))
		return (binary_trees_ancestor(b, second));
	return (binary_trees_ancestor(b, t));
}
