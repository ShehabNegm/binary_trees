#include "binary_trees.h"

/**
  * binary_tree_sibling - found the sibling of a node
  * @node: node to find sibling of
  * Return: will return the sibling node of the node
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);

	return (node->parent->right);
}
