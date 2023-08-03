#include "binary_trees.h"

/**
  * binary_tree_uncle - found the uncle of a node
  * @node: node to find uncle of
  * Return: will return the uncle node of the node
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}
