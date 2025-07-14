/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:00:44 by tcabral           #+#    #+#             */
/*   Updated: 2025/07/14 17:26:23 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/includes/libft.h"

int	is_number(const char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	has_duplicates(t_node *stack)
{
	t_node	*current;
	t_node	*check;

	current = stack;
	while (current)
	{
		check = current->next;
		while (check)
		{
			if (check->value == current->value)
				return (1);
			check = check->next;
		}
		current = current->next;
	}
	return (0);
}

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	parse_args(char **argv, t_node **stack)
{
	long	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!is_number(argv[i]))
			return (0);
		num = ft_atol(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (0);
		add_back(stack, (int)num);
		i++;
	}
	if (has_duplicates(*stack))
		return (0);
	return (1);
}
