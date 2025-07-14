/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:09:39 by tcabral           #+#    #+#             */
/*   Updated: 2025/07/14 17:26:03 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/includes/libft.h"

static int	count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		if (*str)
			count++;
		while (*str && *str != ' ' && !(*str >= 9 && *str <= 13))
			str++;
	}
	return (count);
}

static char	**join_and_split(int argc, char **argv)
{
	char	*joined;
	char	*tmp;
	char	**split;
	int		i;

	joined = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		tmp = ft_strjoin(joined, " ");
		free(joined);
		joined = ft_strjoin(tmp, argv[i]);
		free(tmp);
		i++;
	}
	split = ft_split(joined, ' ');
	free(joined);
	return (split);
}

t_node	*create_stack(int argc, char **argv)
{
	t_node	*stack;
	char	**args;

	stack = NULL;
	args = join_and_split(argc, argv);
	if (!args || !parse_args(args, &stack))
	{
		free_array(args);
		free_stack(&stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	free_array(args);
	return (stack);
}
