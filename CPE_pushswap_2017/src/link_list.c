/*
** EPITECH PROJECT, 2018
** link_list.c
** File description:
** link_list
*/

#include <stdlib.h>
#include "my.h"

list_t	*create_node(int value)
{
	list_t *node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

int	add_list_first(int value, list_t **list)
{
	list_t *new_node;

	if (*list == NULL) {
		*list = create_node(value);
	} else {
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (84);
		(*list)->prev = new_node;
		new_node->next = *list;
		*list = new_node;
		new_node->prev = NULL;
		new_node->value = value;
	}
	return (0);
}

int	add_list_end(int value, list_t **list)
{
	list_t *new_node;
	list_t *tmp = *list;

	if (*list == NULL) {
		*list = create_node(value);
	} else {
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (84);
		(*list)->prev = NULL;
		new_node->next = NULL;
		new_node->value = value;
		while (tmp->next != NULL) {
			tmp = tmp->next;
			new_node->prev = *list;
		}
		tmp->next = new_node;
	}
	return (0);
}

void	remove_list(list_t **list)
{
	list_t *tmp = *list;

	*list = tmp->next;
	tmp->prev = NULL;
}

int	is_order(list_t **list)
{
	list_t *check1 = *list;
	list_t *check2 = (*list)->next;

	while (check2 != NULL && check1 != NULL) {
		if (check1->value > check2->value)
			return (0);
		check1 = check1->next;
		check2 = check2->next;
	}
	return (1);
}
