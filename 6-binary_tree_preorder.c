#include "binary_trees.h"

/**
 * binary_tree_preorder - a functio4n
 * @tree: tr333
 * @func: funct33ionn
 * Return: to th3 valu33
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
