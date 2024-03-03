/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:22:38 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:22:57 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"
#include "utils.h"
#include "free.h"

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int	*copy_into_sorted(int *arr, int size)
{
	int	*sorted;
	int	i;

	i = -1;
	sorted = (int *)malloc(sizeof(int) * size);
	if (!sorted)
	{
		free(arr);
		error_message("Error\n");
	}
	while (++i < size)
		sorted[i] = arr[i];
	bubble_sort(sorted, size);
	return (sorted);
}

bool	is_sorted(int *unordered, int size)
{
	int	i;

	i = 0;
	if (size < 2)
		ft_free(unordered, NULL, "");
	while (++i < size)
	{
		if (unordered[i] <= unordered[i - 1])
			return (false);
	}
	return (true);
}

int	*get_nums(int nums_count, char **argv)
{
	int		*nums;
	char	**temp;
	int		indx[3];

	indx[0] = 0;
	indx[2] = -1;
	nums = (int *)malloc(sizeof(int) * nums_count);
	if (!nums)
		error_message("Error\n");
	while (argv[++indx[0]])
	{
		temp = ft_split(argv[indx[0]], ' ');
		if (!temp)
			error_message("Error\n");
		else if (temp[0] == NULL)
			free_matrix(temp, 1);
		else
		{
			indx[1] = -1;
			while (temp[++indx[1]])
				nums[++indx[2]] = ft_atoi(temp[indx[1]]);
			free_matrix(temp, get_matrix_size(temp));
		}
	}
	return (nums);
}
