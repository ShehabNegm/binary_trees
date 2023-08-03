#include "binary_trees.h"

/**
  * binary_tree_leaves - count the leaves of a binary tree
  * @tree: pointer to root node
  * Return: will return the count of the keaves
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leaves++;

	if (tree->right)
		leaves++;

	return (leaves);

}
