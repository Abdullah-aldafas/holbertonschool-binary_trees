#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 *  binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
