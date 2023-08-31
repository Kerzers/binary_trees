#include "binary_trees.h"
int _size(const binary_tree_t *tree);
int _is_complete(const binary_tree_t *tree, int index, int size);

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if complete binary tree, else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size;
	int index = 0;

	if (tree == NULL)
		return (0);

	size = _size(tree);

	if (_is_complete(tree, index, size))
		return (1);
	else
		return (0);
}

/**
 * _is_complete - checks if binary tree is a complete binary tree
 * @tree: pointer to the root node of the tree to check
 * @index: index of node starting from 0
 * @size: size of binary tree
 *
 * Return: 1 if complete binary tree else 0
 */
int _is_complete(const binary_tree_t *tree, int index, int size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);

	return (_is_complete(tree->left, (2 * index + 1), size) &&
			_is_complete(tree->right, (2 * index + 2), size));
}


/**
 * _size - gets size of binary tree
 * @tree: pointer to root node to get the size of
 *
 * Return: size of binary tree
 */
int _size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_size(tree->left) + _size(tree->right) + 1);
}
