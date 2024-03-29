/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_bonus.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:36:56 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:36:58 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKE_STACK_BONUS_H
# define MAKE_STACK_BONUS_H

# include "push_swap_bonus.h"

t_lst	*make_lst(t_stack *stack, int *unordered, int i);
void	make_stack_a(t_stack *stack, int *unordered, int size);
int		*get_nums(int nums_count, char **argv);

#endif   /* MAKE_STACK_BONUS_H */
