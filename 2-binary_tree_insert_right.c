#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Crea un nuevo nodo a la derecha
 * @parent: Puntero al nodo padre del nodo ha crear
 * @value: valor del nuevo nodo
 *
 * Return: puntero al nuevo nodo
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	if (parent == NULL)
		return (NULL);

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);

	/*declaracion de todos los elementos del nodo creado*/
	nodo->n = value;
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;

	if (parent->right != NULL)
	{
		nodo->right = parent->right;
		parent->right = nodo;
	}

	parent->right = nodo;
	return (nodo);
}
