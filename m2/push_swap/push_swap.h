/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:00:20 by tcabral           #+#    #+#             */
/*   Updated: 2025/07/14 16:10:47 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// Stack structure
typedef struct s_node
{
	int				value;
	int				index;     // Useful for radix sort
	struct s_node	*next;
}	t_node;

// Stack Operations
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

// Utility Functions
t_node	*create_stack(int argc, char **argv);
void	add_node(t_node **stack, int value);
int		stack_size(t_node *stack);
void	free_stack(t_node **stack);
int		is_sorted(t_node *stack);
void	free_array(char **arr);

// Sorting Algorithms
void	sort_three(t_node **a);
void	sort_small(t_node **a, t_node **b);
void	radix_sort(t_node **a, t_node **b);

// Validation & Parsing
int		is_number(char *str);
int		ft_atol(const char *str, int *error);
void	has_duplicates(t_node *stack);

#endif

