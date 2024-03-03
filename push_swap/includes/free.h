/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:20:01 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:20:04 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H

# include "push_swap.h"

void	ft_free(int *unordered, int *sorted, char *sms);
void	free_matrix(char **matrix, int size);
void	free_and_exit(char **matrix, int size, char *sms);
void	free_list_and_exit(t_stack *stack, int *arrays[], int i);
void	free_stacks_and_arrays(t_stack *st_a, t_stack *st_b, int *a1, int *a2);

#endif   /* FREE_H */
