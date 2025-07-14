/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:00:28 by tcabral           #+#    #+#             */
/*   Updated: 2025/07/14 17:26:11 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/includes/libft.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc < 2)
		return (0);
	a = create_stack(argc, argv);
	b = NULL;
	if (!is_sorted(a))
	{
		if (stack_size(a) <= 3)
			sort_three(&a);
		else if (stack_size(a) <= 5)
			sort_small(&a, &b);
		else
			radix_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
