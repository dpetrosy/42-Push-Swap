/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:20:14 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:20:16 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUTTERFLY_H
# define BUTTERFLY_H

# include "push_swap.h"

void	find_max_and_push_b(t_lst *lst, t_stack *stack_a, int size);
void	find_max_and_push_a(t_lst *lst, t_stack *stack_b, int size);
void	sort_stack(t_stack *st_a, t_stack *st_b);
void	make_butterfly(t_stack *st_a, t_stack *st_b, int chunk);
void	butterfly_algo(t_stack *st_a, t_stack *st_b, int size);

#endif
