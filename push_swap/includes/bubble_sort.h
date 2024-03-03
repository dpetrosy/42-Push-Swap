/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:20:26 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:38:43 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUBBLE_SORT_H
# define BUBBLE_SORT_H

# include <stdbool.h>

void	bubble_sort(int *arr, int size);
int		*copy_into_sorted(int *arr, int size);
bool	is_sorted(int *unordered, int size);
int		*get_nums(int nums_count, char **argv);

#endif   /* BUBBLE_SORT_H */
