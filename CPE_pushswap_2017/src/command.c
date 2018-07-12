/*
** EPITECH PROJECT, 2018
** command.c
** File description:
** command
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	pb(list_t **a, list_t **b)
{
	int tmp = (*a)->value;

	add_list_first((*a)->value, b);
	(*b)->value = tmp;
	remove_list(a);
	write(1, "pb ", 3);
}

void	pa(list_t **a, list_t **b)
{
	int tmp = (*b)->value;

	add_list_first((*b)->value, a);
	(*b)->value = tmp;
	remove_list(b);
	write(1, "pa", 2);
}

void	sa(list_t **a)
{
	int tmp = 0;

	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	write(1, "sa ", 3);
}

int	check_minor(list_t **a)
{
	list_t *one = *a;
	int tmp = one->value;

	while (one != NULL && one->next != NULL) {
		if (tmp > one->next->value) {
			tmp = one->next->value;
		}
		one = one->next;
	}
	return (tmp);
}

void	rra(list_t **a)
{
	list_t *first = *a;
	list_t *last = *a;
	int tmp = 0;

	while (last->next != NULL) {
		last = last->next;
		tmp = last->value;
		last->value = first->value;
		first->value = tmp;
	}
	write(1, "rra ", 4);
}
