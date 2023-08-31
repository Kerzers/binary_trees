#include "binary_trees.h"
/**
 *binary_tree_rotate_left - performs a left-rotation on a binary tree
 *@tree:  a pointer to the root node of the tree to rotate
 *
 *Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *old_left;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new_root = tree->right;
	old_left = tree->right->left;
	/* rotate left*/
	new_root->parent = tree->parent;
	new_root->left = tree;
	tree->parent = new_root;
	tree->right = old_left;
	if (old_left)
		old_left->parent = tree;
	return (new_root);
}
