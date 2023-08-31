#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node to find the uncle
 *
 * Return: uncle node or NULL if node is NULL or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	uncle = binary_tree_sibling(parent);

	return (uncle);
}


/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: sibling of node else NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        binary_tree_t *parent;

        if (node == NULL || node->parent == NULL)
                return (NULL);

        parent = node->parent;
        if (parent->left == node)
                return (parent->right);
        else
                return (parent->left);
}
