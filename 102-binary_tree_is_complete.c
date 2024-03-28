#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_complete - functi4on
 * @tree: tr33
 * Return: retuu3rnn
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_complete_util(tree, 0, binary_tree_size(tree)));
}
/**
 * binary_tree_is_complete_util - finction33
 * @tree: th33 tr33
 * @index: ind3xx tr33
 * @node_count: count3r for th3 nod3
 * Return: valu33.
 */
int binary_tree_is_complete_util(
	const binary_tree_t *tree, int index, int node_count)
{
	if (!tree)
		return (1);

	if (index >= node_count)
		return (0);

	return (binary_tree_is_complete_util(
		tree->left, 2 * index + 1, node_count) &&
			binary_tree_is_complete_util(
				tree->right, 2 * index + 2, node_count));
}
