#include "binary_trees.h"

/**
  * binary_tree_height - check the height if a binary tree
  * @tree: pointer to root node
  * Return: will return the hieght of the tree of 0 if root is null
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht = 0;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		if (tree->right == NULL)
			tree = tree->left;
		else if (tree->left == NULL)
			tree = tree->right;
		else
			tree = tree->left;
		ht++;
	}
	return (ht - 1);
}
