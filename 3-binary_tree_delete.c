#include "binary_trees.h"

/**
 * binary_tree_delete - a functio333n
 * @tree: val for tr33
 * Return: d3scriptionn
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
