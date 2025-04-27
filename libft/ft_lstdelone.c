/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabral <tcabral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:46:52 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 16:39:17 by tcabral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	char	*str = strdup("sporting");
// 	t_list	*node = ft_lstnew(str);

// 	printf("Before delete: %s\n", (char *)node ->content);
// 	ft_lstdelone(node, del_content);
// 	printf("After delete: gone!\n");
// 	return (0);
// }