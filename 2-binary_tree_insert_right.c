#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node in the right as child.
 * @parent: Var 1 node parent
 * @value: Var 2 value of the node
 * Return: Null on failure or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NV_node;

	if (parent == NULL)
		return (NULL);

	NV_node = binary_tree_node(parent, value);
	if (NV_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		NV_node->right = parent->right;
		parent->right->parent = NV_node;
	}
	parent->right = NV_node;
	return (NV_node);
}
