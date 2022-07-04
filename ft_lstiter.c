/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:09:55 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:12:49 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_stack *lst, void (*f)(t_stack *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
