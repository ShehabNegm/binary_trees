#include "binary_trees.h"

/**
  * binary_tree_height - check the height if a binary tree
  * @tree: pointer to root node
  * Return: will return the hieght of the tree of 0 if root is null
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t htl = 0;
	size_t htr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		htl = 1 + binary_tree_height(tree->left);

	if (tree->right)
		htr = 1 + binary_tree_height(tree->right);

	if (htl > htr)
		return (htl);
	return (htr);
}
