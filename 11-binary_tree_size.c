#include "binary_trees.h"

/**
  * binary_tree_size - check the size of a binary tree
  * @tree: pointer to root node
  * Return: will return the size of the tree of 0 if root is null
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (tree == NULL)
		return (0);

	sz = 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (sz);

}
