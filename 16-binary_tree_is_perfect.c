#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"

/**
 * height - Computes the height of a binary tree
 * @tree: Pointer to the root
 * Return: Height of the tree
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
 * count_nodes - Counts the total number of nodes in the tree
 * @tree: Pointer to the root
 * Return: Number of nodes
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int h, expected_nodes, actual_nodes;

	if (tree == NULL)
		return (0);

	h = height(tree);
	expected_nodes = (1 << h) - 1;
	actual_nodes = count_nodes(tree);

	return (actual_nodes == expected_nodes);
}
