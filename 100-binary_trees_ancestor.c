#include "binary_trees.h"

/**
* binary_trees_ancestor - functionnnn3
* @first: first nod3
* @second: s3cond nod3
*
* Return: to th3 point33r
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return (binary_tree_t *)first;

	while (first != NULL)
	{
		temp = second;

		while (temp != NULL)
		{
			if (first == temp)
				return (binary_tree_t *)first;
			temp = temp->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
