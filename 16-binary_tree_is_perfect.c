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

/**
  * binary_tree_is_full - check if binary tree is full
  * @tree: pointer to root node
  * Return: will return 1 if full 0 otherwise
  */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}

/**
  * binary_tree_is_perfect - check if binary tree is perfect
  * @tree: pointer to root node
  * Return: will return 1 if perfect 0 otherwise
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
