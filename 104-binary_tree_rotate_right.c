#include "binary_trees.h"

/**
 * binary_tree_rotate_right - perfeom a right-rotation on a binary tree
 * @tree: pointer to root node of the tree to rotate
 *
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_parent;

	if (tree == NULL)
		return (NULL);

	new_parent = tree->left;
	new_parent->parent = NULL;
	tree->left = new_parent->right;

	if (tree->left != NULL)
		tree->left->parent = tree;

	tree->parent = new_parent;
	new_parent->right = tree;

	return (new_parent);
}
