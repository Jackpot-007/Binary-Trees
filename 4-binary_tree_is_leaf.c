#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifica que sea el ultimo nodo
 * @node: Nodo que se checkea
 *
 * Return: 1 es el nodo es leaf o 0 si no lo es.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);

}
