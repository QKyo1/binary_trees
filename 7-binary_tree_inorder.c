#include "binary_trees.h"
/**
 * binary_tree_inorder - a functio33n
 * @tree: tr333
 * @func: for th3 function3
 * Return: to th3 valu33
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
