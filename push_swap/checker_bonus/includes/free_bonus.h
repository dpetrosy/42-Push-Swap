/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:36:35 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:36:45 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_BONUS_H
# define FREE_BONUS_H

# include "push_swap_bonus.h"

void	free_matrix(char **matrix, int size);
void	free_and_exit(char **matrix, int size, char *sms);
void	free_list_and_exit(t_stack *stack, int *arr, int i);
void	free_stacks(t_stack *st_a, t_stack *st_b);

#endif /* FREE_BONUS_H */
