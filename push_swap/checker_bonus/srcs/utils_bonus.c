/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:39:31 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:39:33 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils_bonus.h"
#include "libft.h"

void	init_stacks(t_stack *st_a, t_stack *st_b)
{
	st_a->head = NULL;
	st_a->tail = NULL;
	st_a->nodes = 0;
	st_b->head = NULL;
	st_b->tail = NULL;
	st_b->nodes = 0;
}

void	error_message(char *sms)
{
	write(2, sms, ft_strlen(sms));
	exit(EXIT_FAILURE);
}

int	get_matrix_size(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		++i;
	return (i + 1);
}
