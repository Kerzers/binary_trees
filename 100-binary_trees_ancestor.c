#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lowest common ancestor or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *temp;
	binary_tree_t *temp1;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);

	if (first == second)
		return ((binary_tree_t *)first);

	temp = (binary_tree_t *)first;
	while (temp != NULL)
	{
		temp1 = (binary_tree_t *)second;
		while (temp1 != NULL)
		{
			if (temp == temp1)
				return (temp);
			temp1 = temp1->parent;
		}
		temp = temp->parent;
	}
	return (NULL);
}
