#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: a pointer to the root node of the tree to count the num of leaves
 *
 *Return: num of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	/*case if node is a leaf*/
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		leaves++;
	if (tree->right)
		leaves++;
	return (leaves);
}
