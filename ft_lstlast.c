/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:02:08 by noalexan          #+#    #+#             */
/*   Updated: 2022/03/29 09:04:36 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*tmp;
	t_list	*value;

	i = -1;
	tmp = lst;
	while (tmp != NULL && ++i)
	{
		value = tmp;
		tmp = tmp->next;
	}
	return (value);
}
