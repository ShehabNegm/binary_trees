#include "binary_trees.h"

/**
  * binary_tree_depth - check the depth of a binary tree
  * @tree: pointer to root node
  * Return: will return the depth of the tree of 0 if root is null
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		dp++;
		tree = tree->parent;
	}
	return (dp - 1);
}
