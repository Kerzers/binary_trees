#include "binary_trees.h"
/**
 *binary_tree_depth - the depth of a node in a binary tree
 *@tree: is a pointer to the node to measure the depth
 *
 *Return: depth, otherwise 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp;
	size_t depth = 0;

	if (tree)
	{
		temp = tree;
		while (temp->parent)
		{
			depth++;
			temp = temp->parent;
		}
	}
	return (depth);
}
