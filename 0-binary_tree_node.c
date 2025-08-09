#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Crea un nuevo nodo
 * @parent: Puntero al nodo padre del nodo creado
 * @value: Valor para nuevo nodo
 *
 * Return: Puntero al nuevo nodo, o NULL si falla
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;

	return (new_n);
}
