#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 *  height - Finds the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: Height of the tree, or 0 if tree is NULL
 */


int height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}

}

/**
 *  binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return:  Balance factor (left height - right height), or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (height(tree->left) - height(tree->right));
}
