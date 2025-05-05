/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:17:23 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 16:39:23 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*a = ft_lstnew("First");
// 	t_list	*b = ft_lstnew("Second");
// 	t_list	*c = ft_lstnew("Last");

// 	ft_lstadd_front(&b, a);
// 	ft_lstadd_front(&c, b);
// 	t_list	*last = ft_lstlast(c);
// 	printf("Last node content: %s\n", (char *)last->content);
// 	return (0);
// }