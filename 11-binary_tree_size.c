#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 *  binary_tree_size - a function that measures the size of a binary tree
 * @tree: pointer to the node to measure size
 * Return: size of the node, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
