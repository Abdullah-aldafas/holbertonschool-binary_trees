#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: An input pounter
 * @value: An input intger
 * Return:  reates a binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *add;

	if (parent == NULL)
	{
		return (NULL);
	}
	add = malloc(sizeof(binary_tree_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->n = value;
	add->parent = parent;
	add->left = NULL;
	add->right = NULL;

	return (add);
}
