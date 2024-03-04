/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:36:26 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:36:33 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap_bonus.h"

void	sorted_exit(t_stack *st_a, t_stack *st_b, char *sms);
void	is_sorted_stack(t_stack *st_a, t_stack *st_b);
void	do_inst(char *inst, t_stack *st_a, t_stack *st_b);
int		check_inst(char *inst);
void	checker(t_stack *st_a, t_stack *st_b);

#endif	/* CHECKER_BONUS_H */
