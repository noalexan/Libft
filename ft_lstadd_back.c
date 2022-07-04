/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:54:11 by noahalexand       #+#    #+#             */
/*   Updated: 2022/06/03 10:15:04 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst != NULL)
	{
		last = *lst;
		last = ft_lstlast(*lst);
		last->next = new;
		return ;
	}
	*lst = new;
}
