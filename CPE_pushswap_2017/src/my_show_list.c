/*
** EPITECH PROJECT, 2018
** my_show_list.c
** File description:
** my_show_list
*/

#include <stdlib.h>
#include "my.h"

void	my_show_list(list_t *node)
{
	list_t *tmp = node;

	while (tmp != NULL) {
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}
}
