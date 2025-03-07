/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbouka <selbouka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:05:55 by selbouka          #+#    #+#             */
/*   Updated: 2025/02/17 09:11:20 by selbouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdbool.h>

int		is_sorted(char **lst);
void	duplicate_arg_check(char **lst);
void	empty_arg_check(char **av);
void	only_digit(char **lst);
char	**check_av(int ac, char **av);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	sorting(t_stack **stack_a, t_stack **stack_b);
void	s_three(t_stack **stack_a);

void	err(int i);
int		best_move(t_stack *lst, int idx);
t_stack	*add_args_to_a(char **lst, t_stack **stack_a);
void	get_index(t_stack **list);
int		max_index(t_stack *stack_a);

void	*ft_malloc(size_t size, int mode);

#endif
