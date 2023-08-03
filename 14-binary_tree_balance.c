#include "binary_trees.h"

/**
  * binary_tree_height - check the height of binary tree
  * @tree: pointer to root node
  * Return: will return the height of the tree or 0 if root is null
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

	if (!tree->left)
		htl++;

	if (!tree->right)
		htr++;

	if (htl > htr)
		return (htl);

	return (htr);
}


/**
  * binary_tree_balance - check the balancing factor of binary tree
  * @tree: pointer to root node
  * Return: will return thebalancing factor or 0 if root is null
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
