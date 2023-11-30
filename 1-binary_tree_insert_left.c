#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node in the left as child.
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NV_node;

	if (parent == NULL)
		return (NULL);

	NV_node = binary_tree_node(parent, value);
	if (NV_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		NV_node->left = parent->left;
		parent->left->parent = NV_node;
	}
	parent->left = NV_node;
	return (NV_node);
}
