#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 * @parent: An input pounter
 * @value: An input intger
 * Return:  reates a binary tree node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *insert;

	if (parent == NULL)
	{
		return (NULL);
	}
	insert = malloc(sizeof(binary_tree_t));
	if (insert == NULL)
		return (NULL);
	insert->n = value;
	insert->parent = parent;
	insert->right = NULL;
	if (parent->left != NULL)
	{
		insert->left = parent->left;
		parent->left->parent = insert;
	}
	else
	{
		insert->left = NULL;
	}
	parent->left = insert;
	return (insert);
}
