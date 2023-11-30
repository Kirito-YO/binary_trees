#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node
 * @parent: Var 1 node parent
 * @value: Var 2 value of the node
 * Return: Null on failure or the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NV_node = malloc(sizeof(binary_tree_t));

	if (NV_node == NULL)
		return (NULL);
	NV_node->n = value;
	NV_node->parent = parent;
	NV_node->left = NULL;
	NV_node->right = NULL;
	return (NV_node);
}
