include "binary_trees.h"

/*
 * binary_tree_insert_right - inserts node at the right side of another node
 * @parent: pointer to the node to insert right child in
 * @value: value to store in node
 *
 * Return: Pointer to the new ly created node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);


	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}

	return (new_node);

}
