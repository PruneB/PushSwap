/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

int	my_getnbr(char *str)
{
	int i = 0;
	int count = 0;
	int neg = 1;

	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
		count = count * 10 + str[i] - '0';
		i++;
	}
	return (count);
}
