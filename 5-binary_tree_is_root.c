#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "binary_trees.h"
/**
binary_tree_depth -  that measures the depth of a node in a binary tree
@tree: pointer to the node to measure depth
Return: depth of the node, or 0 if tree is NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->parent == NULL)
return (1);
else
return (0);
}
