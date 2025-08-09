#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Crea un nodo hijo izquierdo del nodo parent
 * @parent: Puntero a nodo padre
 * @value: Valor en nuevo nodo
 *
 * Return: Puntero al nodo creado
 *
 */
binary_tree_t
*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	if (parent == NULL)
		return (NULL);

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
		return (NULL);

	nodo->n = value;
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;

	if (parent->left != NULL)
	{
		nodo->left = parent->left;
		parent->left->parent = nodo;
	}
/*si n padre ya tiene un leftchild este pasa a ser leftchild de n creado*/
	parent->left = nodo;

	return (nodo);
}
