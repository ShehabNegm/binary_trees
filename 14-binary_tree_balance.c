#include "binary_trees.h"

/**
  * binary_tree_balance - check the balance factor of binary tree
  * @tree: pointer to root node
  * Return: will return the balance factor of the tree or 0 if root is null
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int htl = 0;
	int htr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		htl = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		htr = 1 + binary_tree_balance(tree->right);

	return (htl - htr);
}
