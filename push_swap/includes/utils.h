/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:19:27 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:20:45 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "push_swap.h"

void	init_stack(t_stack *st_b, int **sorted);
void	error_message(char *sms);
int		get_matrix_size(char **matrix);
int		generate_chunk(int size);

#endif   /* UTILS_H */
