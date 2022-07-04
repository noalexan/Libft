/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_before_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:44:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/28 15:57:01 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lst_before_last(t_stack *lst)
{
	if (lst && lst->next)
		while (lst->next->next)
			lst = lst->next;
	return (lst);
}
