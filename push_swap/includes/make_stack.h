/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:19:55 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:40:12 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKE_STACK_H
# define MAKE_STACK_H

# include "push_swap.h"

int		find_index(int *arr, int value, int size);
t_lst	*make_lst(t_stack *stack, int *arrays[], int size, int i);
void	make_stack_a(t_stack *stack, int *unordered, int *sorted, int size);

#endif   /* MAKE_STACK_H */
