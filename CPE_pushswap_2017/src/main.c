/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	free_list(list_t **a)
{
	list_t *tmp;

	while (*a != NULL) {
		tmp = *a;
		*a = tmp->next;
		free(tmp);
	}
}

int	main(int ac, char **av)
{
	int i = 1;
	list_t *list = NULL;
	list_t *listb = NULL;

	while (av[i] != NULL) {
		add_list_end(my_getnbr(av[i]), &list);
		i++;
	}
	if (ac == 1) {
		write(2, "Error : bad argument\n", 21);
		return (84);
	}
	if (ac == 2) {
		write(1, "\n", 1);
		return (0);
	}
	bubble(&list, &listb);
	my_show_list(list);
	free_list(&list);
	return (0);
}
