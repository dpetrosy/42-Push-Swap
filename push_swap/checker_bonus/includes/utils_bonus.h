/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:37:23 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:37:26 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include "push_swap_bonus.h"

void	init_stacks(t_stack *st_a, t_stack *st_b);
void	error_message(char *sms);
int		get_matrix_size(char **matrix);

#endif   /* UTILS_BONUS_H */
