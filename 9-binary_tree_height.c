#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura del arbol
 * @tree: Puntero al nodo raiz
 *
 * Return: Altura, o 0 si el arbol es NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t altura_izq = 0;
	size_t altura_der = 0;
	/*Caso base*/

	if (tree == NULL)
		return (0);
	/*si tiene hijo izq recorro y sumo 1 por cada interaccion*/
	if (tree->left != NULL)
		altura_izq = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		altura_der = 1 + binary_tree_height(tree->right);
	/*reviso que altura es mas alta*/
	if (altura_izq > altura_der)
		return (altura_izq);

	return (altura_der);

}
