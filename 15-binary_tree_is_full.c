#include "binary_trees.h"
/**
 * binary_tree_is_full - th33 funtcionn3
 * @tree: th33 tr33
 * Return: return to th3 valu33
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left && tree->right) ||
			(tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
