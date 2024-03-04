/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions1_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:39:22 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:39:24 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_actions_bonus.h"

void	ss_stacks(t_stack *st_a, t_stack *st_b)
{
	swap_stack(st_a);
	swap_stack(st_b);
}

void	rr_stacks(t_stack *st_a, t_stack *st_b)
{
	rotate_stack(st_a);
	rotate_stack(st_b);
}

void	rrr_stacks(t_stack *st_a, t_stack *st_b)
{
	reverse_rotate_stack(st_a);
	reverse_rotate_stack(st_b);
}
