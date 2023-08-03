#include "binary_trees.h"

/**
  * binary_tree_nodes - count the nodes with 1 child at elast
  * @tree: pointer to root node
  * Return: will return the count of the nodes
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		nodes++;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
