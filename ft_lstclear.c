/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:38:50 by noalexan          #+#    #+#             */
/*   Updated: 2022/06/03 10:12:39 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack *stack)
{
	if (stack)
	{
		ft_lstclear(stack->next);
		free(stack);
	}
}
