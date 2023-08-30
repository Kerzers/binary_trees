#include "binary_trees.h"
int binary_tree_height_node(const binary_tree_t *node);
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *
 *Return: the balance, otherwise 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height_node(tree->left);
	height_right = binary_tree_height_node(tree->right);
	balance = height_left - height_right;
	return (balance);
}

/**
 * binary_tree_height_node - function that measures the height of a node
 * @node: pointer to node to measure its height
 *
 * Return: return the height of a node
 * if node is NULL its height is -1
 */
int binary_tree_height_node(const binary_tree_t *node)
{
	int left_height = 0;
	int right_height = 0;
	int height = 0;

	if (node == NULL)
		return (-1);

	left_height += binary_tree_height_node(node->left);
	right_height += binary_tree_height_node(node->right);

	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;
	return (height);
}
