#include "binary_trees.h"

/**
  * binary_tree_insert_right - function to create a node of a parent in right
  * @parent: parent of the node to be created
  * @value: value to be added to the node created
  * Return: will return pointer to new node or NULL if failed
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp;

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		tmp = parent->right;
		parent->right = new;
		new->right = tmp;
		tmp->parent = new;
	}
	return (new);
}
