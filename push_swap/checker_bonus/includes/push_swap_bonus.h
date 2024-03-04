/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:37:02 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 18:37:09 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

typedef struct s_lst
{
	int				value;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

typedef struct s_stack
{
	t_lst	*head;
	t_lst	*tail;
	int		nodes;
}	t_stack;

#endif   /* PUSH_SWAP_BONUS_H */
