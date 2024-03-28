#include "binary_trees.h"
/**
 * binary_tree_leaves - for th33 functi3on
 * @tree: th3 tr33
 * Return: valu33
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
