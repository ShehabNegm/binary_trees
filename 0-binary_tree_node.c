#include "binary_trees.h"

/**
  * binary_tree_node - function to create a node of a parent
  * @parent: parent of the node to be created
  * @value: value to be added to the node created
  * Return: will return pointer to new node or NULL if failed
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
