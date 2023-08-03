#include "binary_trees.h"

/**
  * binary_tree_postorder - postorder traversal of the tree
  * @tree: pointer to root node
  * @func: pointer to function to be used on node
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
