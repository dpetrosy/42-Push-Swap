/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapetros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:20:09 by dapetros          #+#    #+#             */
/*   Updated: 2024/03/04 00:20:10 by dapetros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ARGS_H
# define CHECK_ARGS_H

void	check_duplicates(int *unordered, int size);
void	check_num1(char *num, char **temp);
void	check_num(char *num, char **temp, int *nums_count);
int		get_nums_count(char **argv);
int		check_args(int argc, char **argv);

#endif   /* CHECK_ARGS_H */
