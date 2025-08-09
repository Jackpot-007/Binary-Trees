#include "binary_trees.h"

/**
 * binary_tree_inorder - Recorre el arbol in-order
 * @tree: Puntero al nodo raiz del arbol
 * @func:Puntero a la funcion que va usar
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n); /*nodo actual*/
	binary_tree_inorder(tree->right, func);
}
