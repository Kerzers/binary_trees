#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node)
	{
		if (parent->left == NULL)
			parent->left = node;
		else
		{
			temp = parent->left;
			temp->parent = node;
			temp->parent = node;
			parent->left = node;
			node->left = temp;
		}
	}
	return (node);
}
