#include "binary_trees.h"
/**
 * binary_tree_is_root - a funct33nn
 * @node: nod33 descriptonn
 * Return: retu33nn
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
