/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noahalexandre <noahalexandre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:23:35 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/30 08:49:18 by noahalexand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		i;
	t_list	*tmp;
	t_list	*value;

	i = -1;
	tmp = lst;
	while (tmp != NULL && ++i)
	{
		ft_lstdelone(tmp, del);
		tmp = tmp->next;
	}
}
