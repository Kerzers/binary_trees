#include "binary_trees.h"
void print_level(const binary_tree_t *tree, int level, void (*func)(int));

/**
 *binary_tree_levelorder - go through a binary tree using level-order traversal
 *@tree: pointer to the the root node
 *@func: a pointer to a function to call for each node
 *Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h;

	if (!tree || !func)
		return;

	h = binary_tree_height(tree);
	for (i = 1; i <= h + 1; i++)
		print_level(tree, i, func);
}
/**
 *print_level - prints node of a given level
 *@tree: pointer to the node
 *@level: level of nodes
 *@func: pointer to a function
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node to measure the height
 *
 * Return: return the height or 0 if failed
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL &&  tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
