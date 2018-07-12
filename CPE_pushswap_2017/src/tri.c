/*
** EPITECH PROJECT, 2018
** tri.c
** File description:
** tri
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	lenght_list(list_t **list)
{
	int count = 1;
	list_t *lista = *list;

	while (lista->next != NULL) {
		count = count + 1;
		lista = lista->next;
	}
	return (count);
}

void	tri(list_t **a, list_t **b)
{
	int min;
	list_t *one = *a;

	while (!is_order(a) && *a != NULL) {
		one = *a;
		min = check_minor(a);
		if (one->value > one->next->value)
			sa(a);
		while (one->value != min) {
			rra(a);
		}
		pb(a, b);
	}
}

void	bubble(list_t **a, list_t **b)
{
	if (is_order(a)) {
		write(1, "\n", 1);
		return;
	}
	tri(a, b);
	while ((*b)->next != NULL) {
		pa(a, b);
		write(1, " ", 1);
	}
	pa(a, b);
	write(1, "\n", 1);
}
