/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:39:01 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:39:05 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap_bonus.h"
#include "utils_bonus.h"

void	free_matrix(char **matrix, int size)
{
	--size;
	while (size >= 0)
	{
		free(matrix[size]);
		matrix[size] = NULL;
		--size;
	}
	free(matrix);
	matrix = NULL;
}

void	free_and_exit(char **matrix, int size, char *sms)
{
	free_matrix(matrix, size);
	error_message(sms);
}

void	free_list_and_exit(t_stack *stack, int *arr, int i)
{
	int		j;
	t_lst	*temp;

	j = -1;
	free(arr);
	while (++j < i)
	{
		temp = stack->head->next;
		free(stack->head);
		stack->head = temp;
	}
	error_message("Error\n");
}

void	free_stacks(t_stack *st_a, t_stack *st_b)
{
	int		i;
	t_lst	*temp;

	if (st_a->head)
	{
		i = -1;
		while (++i < st_a->nodes)
		{
			temp = st_a->head;
			st_a->head = st_a->head->next;
			free(temp);
		}
	}
	if (st_b->head)
	{
		i = -1;
		while (++i < st_b->nodes)
		{
			temp = st_b->head;
			st_b->head = st_b->head->next;
			free(temp);
		}
	}
}
