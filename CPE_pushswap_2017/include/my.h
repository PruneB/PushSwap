/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h pushswap
*/

#ifndef MY_H_
#define MY_H_

typedef struct list_s
{
	int value;
	struct list_s *prev;
	struct list_s *next;
} list_t;

int	lenght_list(list_t **list);
void	rra(list_t **a);
int	check_minor(list_t **a);
int	add_list_end(int value, list_t **list);
void	bubble(list_t **a, list_t **);
int	is_order(list_t **list);
void	remove_list(list_t **list);
void	pb(list_t **a, list_t **b);
void	pa(list_t **a, list_t **b);
void	sa(list_t **a);
void	sb(list_t *a, list_t *b);
void	my_show_list(list_t *node);
int	my_printf(char *format, ...);
int	my_getnbr(char *str);
list_t	*create_node(int value);
int	add_list_first(int value, list_t **list);

#endif
