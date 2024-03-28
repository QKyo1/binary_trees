#include "binary_trees.h"
/**
 * binary_tree_postorder - a funct3ionn
 * @tree: th33 tr33
 * @func: for th3 functi4onn
 * Return: to th33 valu33
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
